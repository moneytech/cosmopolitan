#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_FAN_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_FAN_H_
#include "libc/runtime/symbolic.h"

#define FAN_ACCESS SYMBOLIC(FAN_ACCESS)
#define FAN_ACCESS_PERM SYMBOLIC(FAN_ACCESS_PERM)
#define FAN_ALLOW SYMBOLIC(FAN_ALLOW)
#define FAN_ALL_CLASS_BITS SYMBOLIC(FAN_ALL_CLASS_BITS)
#define FAN_ALL_EVENTS SYMBOLIC(FAN_ALL_EVENTS)
#define FAN_ALL_INIT_FLAGS SYMBOLIC(FAN_ALL_INIT_FLAGS)
#define FAN_ALL_MARK_FLAGS SYMBOLIC(FAN_ALL_MARK_FLAGS)
#define FAN_ALL_OUTGOING_EVENTS SYMBOLIC(FAN_ALL_OUTGOING_EVENTS)
#define FAN_ALL_PERM_EVENTS SYMBOLIC(FAN_ALL_PERM_EVENTS)
#define FAN_CLASS_CONTENT SYMBOLIC(FAN_CLASS_CONTENT)
#define FAN_CLASS_NOTIF SYMBOLIC(FAN_CLASS_NOTIF)
#define FAN_CLASS_PRE_CONTENT SYMBOLIC(FAN_CLASS_PRE_CONTENT)
#define FAN_CLOEXEC SYMBOLIC(FAN_CLOEXEC)
#define FAN_CLOSE SYMBOLIC(FAN_CLOSE)
#define FAN_CLOSE_NOWRITE SYMBOLIC(FAN_CLOSE_NOWRITE)
#define FAN_CLOSE_WRITE SYMBOLIC(FAN_CLOSE_WRITE)
#define FAN_DENY SYMBOLIC(FAN_DENY)
#define FAN_EVENT_METADATA_LEN SYMBOLIC(FAN_EVENT_METADATA_LEN)
#define FAN_EVENT_ON_CHILD SYMBOLIC(FAN_EVENT_ON_CHILD)
#define FAN_MARK_ADD SYMBOLIC(FAN_MARK_ADD)
#define FAN_MARK_DONT_FOLLOW SYMBOLIC(FAN_MARK_DONT_FOLLOW)
#define FAN_MARK_FLUSH SYMBOLIC(FAN_MARK_FLUSH)
#define FAN_MARK_IGNORED_MASK SYMBOLIC(FAN_MARK_IGNORED_MASK)
#define FAN_MARK_IGNORED_SURV_MODIFY SYMBOLIC(FAN_MARK_IGNORED_SURV_MODIFY)
#define FAN_MARK_MOUNT SYMBOLIC(FAN_MARK_MOUNT)
#define FAN_MARK_ONLYDIR SYMBOLIC(FAN_MARK_ONLYDIR)
#define FAN_MARK_REMOVE SYMBOLIC(FAN_MARK_REMOVE)
#define FAN_MODIFY SYMBOLIC(FAN_MODIFY)
#define FAN_NOFD SYMBOLIC(FAN_NOFD)
#define FAN_NONBLOCK SYMBOLIC(FAN_NONBLOCK)
#define FAN_ONDIR SYMBOLIC(FAN_ONDIR)
#define FAN_OPEN SYMBOLIC(FAN_OPEN)
#define FAN_OPEN_PERM SYMBOLIC(FAN_OPEN_PERM)
#define FAN_Q_OVERFLOW SYMBOLIC(FAN_Q_OVERFLOW)
#define FAN_UNLIMITED_MARKS SYMBOLIC(FAN_UNLIMITED_MARKS)
#define FAN_UNLIMITED_QUEUE SYMBOLIC(FAN_UNLIMITED_QUEUE)

#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

hidden extern const long FAN_ACCESS;
hidden extern const long FAN_ACCESS_PERM;
hidden extern const long FAN_ALLOW;
hidden extern const long FAN_ALL_CLASS_BITS;
hidden extern const long FAN_ALL_EVENTS;
hidden extern const long FAN_ALL_INIT_FLAGS;
hidden extern const long FAN_ALL_MARK_FLAGS;
hidden extern const long FAN_ALL_OUTGOING_EVENTS;
hidden extern const long FAN_ALL_PERM_EVENTS;
hidden extern const long FAN_CLASS_CONTENT;
hidden extern const long FAN_CLASS_NOTIF;
hidden extern const long FAN_CLASS_PRE_CONTENT;
hidden extern const long FAN_CLOEXEC;
hidden extern const long FAN_CLOSE;
hidden extern const long FAN_CLOSE_NOWRITE;
hidden extern const long FAN_CLOSE_WRITE;
hidden extern const long FAN_DENY;
hidden extern const long FAN_EVENT_METADATA_LEN;
hidden extern const long FAN_EVENT_ON_CHILD;
hidden extern const long FAN_MARK_ADD;
hidden extern const long FAN_MARK_DONT_FOLLOW;
hidden extern const long FAN_MARK_FLUSH;
hidden extern const long FAN_MARK_IGNORED_MASK;
hidden extern const long FAN_MARK_IGNORED_SURV_MODIFY;
hidden extern const long FAN_MARK_MOUNT;
hidden extern const long FAN_MARK_ONLYDIR;
hidden extern const long FAN_MARK_REMOVE;
hidden extern const long FAN_MODIFY;
hidden extern const long FAN_NOFD;
hidden extern const long FAN_NONBLOCK;
hidden extern const long FAN_ONDIR;
hidden extern const long FAN_OPEN;
hidden extern const long FAN_OPEN_PERM;
hidden extern const long FAN_Q_OVERFLOW;
hidden extern const long FAN_UNLIMITED_MARKS;
hidden extern const long FAN_UNLIMITED_QUEUE;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_FAN_H_ */
