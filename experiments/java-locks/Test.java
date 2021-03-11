import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;
import java.util.concurrent.locks.ReentrantReadWriteLock;
import java.util.concurrent.locks.StampedLock;


public class Test
{
	private static class Locks
	{
		private Object monitor;
		private Lock lock;
		private ReentrantLock reentrantLock;
		private ReentrantReadWriteLock.ReadLock readLock;
		private ReentrantReadWriteLock.WriteLock writeLock;
		private StampedLock stampedLock;


		private Locks()
		{
			lock = new ReentrantLock();
			reentrantLock = new ReentrantLock();
			ReentrantReadWriteLock rwLock = new ReentrantReadWriteLock();
			readLock = rwLock.readLock();
			writeLock = rwLock.writeLock();
			stampedLock = new StampedLock();
		}


		private void f1() {}
		private void f2() {}
		private void x() {}
		private void y() {}


		private void testSynchronizedBlock1()
		{
			x();

			synchronized(this) { // {f1, f2}
				f1(); f2();
			}

			y();
		}


		private void testSynchronizedBlock2()
		{
			x();

			synchronized(monitor) { // {f1, f2}
				f1(); f2();
			}

			y();
		}


		synchronized private void testSynchronizedMethod() // {f1, f2}
		{
			f1(); f2();
		}


		private void testLock()
		{
			x();

			lock.lock(); { // {f1, f2}
				f1(); f2();
			}
			lock.unlock();

			y();
		}


		private void testLockInterruptibly()
		{
			x();

			try {
				lock.lockInterruptibly(); // {f1, f2}
				f1(); f2();
			} catch (InterruptedException e) {
			} finally {
				lock.unlock();
			}

			y();
		}


		private void testReentrantLock()
		{
			x();

			reentrantLock.lock(); { // {f1, f2}
				f1(); f2();
			}
			reentrantLock.unlock();

			y();
		}


		private void testReentrantLockInterruptibly()
		{
			x();

			try {
				reentrantLock.lockInterruptibly(); // {f1, f2}
				f1(); f2();
			} catch (InterruptedException e) {
			} finally {
				reentrantLock.unlock();
			}

			y();
		}


		private void testReadLock()
		{
			x();

			readLock.lock(); { // {f1, f2}
				f1(); f2();
			}
			readLock.unlock();

			y();
		}


		private void testReadLockInterruptibly()
		{
			x();

			try {
				readLock.lockInterruptibly(); // {f1, f2}
				f1(); f2();
			} catch (InterruptedException e) {
			} finally {
				readLock.unlock();
			}

			y();
		}


		private void testWriteLock()
		{
			x();

			writeLock.lock(); { // {f1, f2}
				f1(); f2();
			}
			writeLock.unlock();

			y();
		}


		private void testWriteLockInterruptibly()
		{
			x();

			try {
				writeLock.lockInterruptibly(); // {f1, f2}
				f1(); f2();
			} catch (InterruptedException e) {
			} finally {
				writeLock.unlock();
			}

			y();
		}


		private void testStampLockRead()
		{
			x();

			long stamp = stampedLock.readLock(); { // {f1, f2}
				f1(); f2();
			}
			stampedLock.unlockRead(stamp);

			y();
		}


		private void testStampLockReadInterruptibly()
		{
			x();

			try {
				stampedLock.readLockInterruptibly(); // {f1, f2}
				f1(); f2();
			} catch (InterruptedException e) {
			} finally {
				stampedLock.tryUnlockRead();
			}

			y();
		}


		private void testStampLockWrite()
		{
			x();

			long stamp = stampedLock.writeLock(); { // {f1, f2}
				f1(); f2();
			}
			stampedLock.unlockWrite(stamp);

			y();
		}


		private void testStampLockWriteInterruptibly()
		{
			x();

			try {
				stampedLock.writeLockInterruptibly(); // {f1, f2}
				f1(); f2();
			} catch (InterruptedException e) {
			} finally {
				stampedLock.tryUnlockWrite();
			}

			y();
		}


		private void testStampLockGeneralUnlock()
		{
			x();

			long stamp = stampedLock.readLock(); { // {f1, f2}
				f1(); f2();
			}
			stampedLock.unlock(stamp);

			y();
		}
	}


	public static void main(String[] args)
	{
		Locks locks = new Locks();

		locks.testSynchronizedBlock1();
		locks.testSynchronizedBlock2();
		locks.testSynchronizedMethod();
		locks.testLock();
		locks.testLockInterruptibly();
		locks.testReentrantLock();
		locks.testReentrantLockInterruptibly();
		locks.testReadLock();
		locks.testReadLockInterruptibly();
		locks.testWriteLock();
		locks.testWriteLockInterruptibly();
		locks.testStampLockRead();
		locks.testStampLockReadInterruptibly();
		locks.testStampLockWrite();
		locks.testStampLockWriteInterruptibly();
		locks.testStampLockGeneralUnlock();
	}
}
