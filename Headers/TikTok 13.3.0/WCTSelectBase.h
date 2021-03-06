//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCTChainCall.h"

@interface WCTSelectBase : WCTChainCall
{
    _Bool _prepared;
    struct RecyclableStatement _statementHandle;
    struct StatementSelect _statement;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)finalize;
- (_Bool)next;
- (id)having:(const struct WCTExpr *)arg1;
- (id)groupBy:(const struct WCTExprList *)arg1;
- (id)offset:(const struct WCTExpr *)arg1;
- (id)limit:(const struct WCTExpr *)arg1;
- (id)orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg1;
- (id)where:(const struct WCTExpr *)arg1;
- (_Bool)lazyPrepare;
- (id)initWithCore:(const shared_ptr_43d981cc *)arg1;
- (id)initWithResultList:(const struct WCTResultList *)arg1 fromTables:(id)arg2;
- (_Bool)extractPropertyToObject:(struct NSObject *)arg1 atIndex:(int)arg2 withColumnBinding:(const shared_ptr_5c23a9a8 *)arg3;
- (_Bool)extractValueToRow:(id)arg1;
- (struct NSObject *)extractValue;
- (const struct StatementSelect *)statement;

@end

