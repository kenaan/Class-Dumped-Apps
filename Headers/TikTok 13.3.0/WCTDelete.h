//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCTChainCall.h"

@interface WCTDelete : WCTChainCall
{
    struct StatementDelete _statement;
    int _changes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)changes;
- (_Bool)execute;
- (id)offset:(const struct WCTExpr *)arg1;
- (id)limit:(const struct WCTExpr *)arg1;
- (id)orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg1;
- (id)where:(const struct WCTExpr *)arg1;
- (id)initWithCore:(const shared_ptr_43d981cc *)arg1 andTableName:(id)arg2;

@end

