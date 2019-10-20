//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCTCore.h"

@class NSString;

@interface WCTTable : WCTCore
{
    Class _cls;
    NSString *_tableName;
}

@property(readonly, nonatomic) Class cls; // @synthesize cls=_cls;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *tableName;
- (id)initWithCore:(const shared_ptr_43d981cc *)arg1 andTableName:(id)arg2 andClass:(Class)arg3;
- (id)prepareSelectRowsOnResults:(const struct WCTResultList *)arg1;
- (id)prepareSelectObjectsOnResults:(const struct WCTResultList *)arg1;
- (id)prepareSelectObjects;
- (id)prepareUpdateOnProperties:(const struct WCTPropertyList *)arg1;
- (id)prepareDelete;
- (id)prepareInsertOrReplaceObjectsOnProperties:(const struct WCTPropertyList *)arg1;
- (id)prepareInsertObjectsOnProperties:(const struct WCTPropertyList *)arg1;
- (id)prepareInsertOrReplaceObjects;
- (id)prepareInsertObjects;
- (_Bool)deleteObjectsWhere:(const struct WCTExpr *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 limit:(const struct WCTExpr *)arg3 offset:(const struct WCTExpr *)arg4;
- (_Bool)deleteObjectsOrderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg1 limit:(const struct WCTExpr *)arg2 offset:(const struct WCTExpr *)arg3;
- (_Bool)deleteObjectsWhere:(const struct WCTExpr *)arg1 limit:(const struct WCTExpr *)arg2 offset:(const struct WCTExpr *)arg3;
- (_Bool)deleteObjectsWhere:(const struct WCTExpr *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 offset:(const struct WCTExpr *)arg3;
- (_Bool)deleteObjectsWhere:(const struct WCTExpr *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 limit:(const struct WCTExpr *)arg3;
- (_Bool)deleteObjectsLimit:(const struct WCTExpr *)arg1 offset:(const struct WCTExpr *)arg2;
- (_Bool)deleteObjectsOrderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg1 offset:(const struct WCTExpr *)arg2;
- (_Bool)deleteObjectsOrderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg1 limit:(const struct WCTExpr *)arg2;
- (_Bool)deleteObjectsWhere:(const struct WCTExpr *)arg1 offset:(const struct WCTExpr *)arg2;
- (_Bool)deleteObjectsWhere:(const struct WCTExpr *)arg1 limit:(const struct WCTExpr *)arg2;
- (_Bool)deleteObjectsWhere:(const struct WCTExpr *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2;
- (_Bool)deleteObjectsOffset:(const struct WCTExpr *)arg1;
- (_Bool)deleteObjectsLimit:(const struct WCTExpr *)arg1;
- (_Bool)deleteObjectsOrderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg1;
- (_Bool)deleteObjectsWhere:(const struct WCTExpr *)arg1;
- (_Bool)deleteAllObjects;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withValue:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg4 limit:(const struct WCTExpr *)arg5 offset:(const struct WCTExpr *)arg6;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withValue:(struct NSObject *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 limit:(const struct WCTExpr *)arg4 offset:(const struct WCTExpr *)arg5;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withValue:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 limit:(const struct WCTExpr *)arg4 offset:(const struct WCTExpr *)arg5;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withValue:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg4 offset:(const struct WCTExpr *)arg5;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withValue:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg4 limit:(const struct WCTExpr *)arg5;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withValue:(struct NSObject *)arg2 limit:(const struct WCTExpr *)arg3 offset:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withValue:(struct NSObject *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 offset:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withValue:(struct NSObject *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 limit:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withValue:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 offset:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withValue:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 limit:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withValue:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg4;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withValue:(struct NSObject *)arg2 offset:(const struct WCTExpr *)arg3;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withValue:(struct NSObject *)arg2 limit:(const struct WCTExpr *)arg3;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withValue:(struct NSObject *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withValue:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3;
- (_Bool)updateAllRowsOnProperty:(const struct WCTProperty *)arg1 withValue:(struct NSObject *)arg2;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withRow:(struct NSArray *)arg2 where:(const struct WCTExpr *)arg3 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg4 limit:(const struct WCTExpr *)arg5 offset:(const struct WCTExpr *)arg6;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withRow:(struct NSArray *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 limit:(const struct WCTExpr *)arg4 offset:(const struct WCTExpr *)arg5;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withRow:(struct NSArray *)arg2 where:(const struct WCTExpr *)arg3 limit:(const struct WCTExpr *)arg4 offset:(const struct WCTExpr *)arg5;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withRow:(struct NSArray *)arg2 where:(const struct WCTExpr *)arg3 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg4 offset:(const struct WCTExpr *)arg5;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withRow:(struct NSArray *)arg2 where:(const struct WCTExpr *)arg3 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg4 limit:(const struct WCTExpr *)arg5;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withRow:(struct NSArray *)arg2 limit:(const struct WCTExpr *)arg3 offset:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withRow:(struct NSArray *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 offset:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withRow:(struct NSArray *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 limit:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withRow:(struct NSArray *)arg2 where:(const struct WCTExpr *)arg3 offset:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withRow:(struct NSArray *)arg2 where:(const struct WCTExpr *)arg3 limit:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withRow:(struct NSArray *)arg2 where:(const struct WCTExpr *)arg3 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg4;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withRow:(struct NSArray *)arg2 offset:(const struct WCTExpr *)arg3;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withRow:(struct NSArray *)arg2 limit:(const struct WCTExpr *)arg3;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withRow:(struct NSArray *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withRow:(struct NSArray *)arg2 where:(const struct WCTExpr *)arg3;
- (_Bool)updateAllRowsOnProperties:(const struct WCTPropertyList *)arg1 withRow:(struct NSArray *)arg2;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withObject:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg4 limit:(const struct WCTExpr *)arg5 offset:(const struct WCTExpr *)arg6;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withObject:(struct NSObject *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 limit:(const struct WCTExpr *)arg4 offset:(const struct WCTExpr *)arg5;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withObject:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 limit:(const struct WCTExpr *)arg4 offset:(const struct WCTExpr *)arg5;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withObject:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg4 offset:(const struct WCTExpr *)arg5;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withObject:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg4 limit:(const struct WCTExpr *)arg5;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withObject:(struct NSObject *)arg2 limit:(const struct WCTExpr *)arg3 offset:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withObject:(struct NSObject *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 offset:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withObject:(struct NSObject *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 limit:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withObject:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 offset:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withObject:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 limit:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withObject:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg4;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withObject:(struct NSObject *)arg2 offset:(const struct WCTExpr *)arg3;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withObject:(struct NSObject *)arg2 limit:(const struct WCTExpr *)arg3;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withObject:(struct NSObject *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3;
- (_Bool)updateRowsOnProperty:(const struct WCTProperty *)arg1 withObject:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3;
- (_Bool)updateAllRowsOnProperty:(const struct WCTProperty *)arg1 withObject:(struct NSObject *)arg2;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withObject:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg4 limit:(const struct WCTExpr *)arg5 offset:(const struct WCTExpr *)arg6;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withObject:(struct NSObject *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 limit:(const struct WCTExpr *)arg4 offset:(const struct WCTExpr *)arg5;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withObject:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 limit:(const struct WCTExpr *)arg4 offset:(const struct WCTExpr *)arg5;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withObject:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg4 offset:(const struct WCTExpr *)arg5;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withObject:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg4 limit:(const struct WCTExpr *)arg5;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withObject:(struct NSObject *)arg2 limit:(const struct WCTExpr *)arg3 offset:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withObject:(struct NSObject *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 offset:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withObject:(struct NSObject *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 limit:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withObject:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 offset:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withObject:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 limit:(const struct WCTExpr *)arg4;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withObject:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg4;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withObject:(struct NSObject *)arg2 offset:(const struct WCTExpr *)arg3;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withObject:(struct NSObject *)arg2 limit:(const struct WCTExpr *)arg3;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withObject:(struct NSObject *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3;
- (_Bool)updateRowsOnProperties:(const struct WCTPropertyList *)arg1 withObject:(struct NSObject *)arg2 where:(const struct WCTExpr *)arg3;
- (_Bool)updateAllRowsOnProperties:(const struct WCTPropertyList *)arg1 withObject:(struct NSObject *)arg2;
- (_Bool)insertOrReplaceObjects:(id)arg1 onProperties:(const struct WCTPropertyList *)arg2;
- (_Bool)insertOrReplaceObject:(struct NSObject *)arg1 onProperties:(const struct WCTPropertyList *)arg2;
- (_Bool)insertObjects:(id)arg1 onProperties:(const struct WCTPropertyList *)arg2;
- (_Bool)insertObject:(struct NSObject *)arg1 onProperties:(const struct WCTPropertyList *)arg2;
- (_Bool)insertOrReplaceObjects:(id)arg1;
- (_Bool)insertOrReplaceObject:(struct NSObject *)arg1;
- (_Bool)insertObjects:(id)arg1;
- (_Bool)insertObject:(struct NSObject *)arg1;
- (struct NSArray *)getRowsOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 limit:(const struct WCTExpr *)arg4 offset:(const struct WCTExpr *)arg5;
- (struct NSArray *)getRowsOnResults:(const struct WCTResultList *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 limit:(const struct WCTExpr *)arg3 offset:(const struct WCTExpr *)arg4;
- (struct NSArray *)getRowsOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 limit:(const struct WCTExpr *)arg3 offset:(const struct WCTExpr *)arg4;
- (struct NSArray *)getRowsOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 offset:(const struct WCTExpr *)arg4;
- (struct NSArray *)getRowsOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 limit:(const struct WCTExpr *)arg4;
- (struct NSArray *)getRowsOnResults:(const struct WCTResultList *)arg1 limit:(const struct WCTExpr *)arg2 offset:(const struct WCTExpr *)arg3;
- (struct NSArray *)getRowsOnResults:(const struct WCTResultList *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 offset:(const struct WCTExpr *)arg3;
- (struct NSArray *)getRowsOnResults:(const struct WCTResultList *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 limit:(const struct WCTExpr *)arg3;
- (struct NSArray *)getRowsOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 offset:(const struct WCTExpr *)arg3;
- (struct NSArray *)getRowsOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 limit:(const struct WCTExpr *)arg3;
- (struct NSArray *)getRowsOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3;
- (struct NSArray *)getRowsOnResults:(const struct WCTResultList *)arg1 offset:(const struct WCTExpr *)arg2;
- (struct NSArray *)getRowsOnResults:(const struct WCTResultList *)arg1 limit:(const struct WCTExpr *)arg2;
- (struct NSArray *)getRowsOnResults:(const struct WCTResultList *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2;
- (struct NSArray *)getRowsOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2;
- (struct NSArray *)getAllRowsOnResults:(const struct WCTResultList *)arg1;
- (id)getObjectsOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 limit:(const struct WCTExpr *)arg4 offset:(const struct WCTExpr *)arg5;
- (id)getObjectsOnResults:(const struct WCTResultList *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 limit:(const struct WCTExpr *)arg3 offset:(const struct WCTExpr *)arg4;
- (id)getObjectsOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 limit:(const struct WCTExpr *)arg3 offset:(const struct WCTExpr *)arg4;
- (id)getObjectsOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 offset:(const struct WCTExpr *)arg4;
- (id)getObjectsOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 limit:(const struct WCTExpr *)arg4;
- (id)getObjectsOnResults:(const struct WCTResultList *)arg1 limit:(const struct WCTExpr *)arg2 offset:(const struct WCTExpr *)arg3;
- (id)getObjectsOnResults:(const struct WCTResultList *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 offset:(const struct WCTExpr *)arg3;
- (id)getObjectsOnResults:(const struct WCTResultList *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 limit:(const struct WCTExpr *)arg3;
- (id)getObjectsOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 offset:(const struct WCTExpr *)arg3;
- (id)getObjectsOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 limit:(const struct WCTExpr *)arg3;
- (id)getObjectsOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3;
- (id)getObjectsOnResults:(const struct WCTResultList *)arg1 offset:(const struct WCTExpr *)arg2;
- (id)getObjectsOnResults:(const struct WCTResultList *)arg1 limit:(const struct WCTExpr *)arg2;
- (id)getObjectsOnResults:(const struct WCTResultList *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2;
- (id)getObjectsOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2;
- (id)getAllObjectsOnResults:(const struct WCTResultList *)arg1;
- (id)getObjectsWhere:(const struct WCTExpr *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 limit:(const struct WCTExpr *)arg3 offset:(const struct WCTExpr *)arg4;
- (id)getObjectsOrderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg1 limit:(const struct WCTExpr *)arg2 offset:(const struct WCTExpr *)arg3;
- (id)getObjectsWhere:(const struct WCTExpr *)arg1 limit:(const struct WCTExpr *)arg2 offset:(const struct WCTExpr *)arg3;
- (id)getObjectsWhere:(const struct WCTExpr *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 offset:(const struct WCTExpr *)arg3;
- (id)getObjectsWhere:(const struct WCTExpr *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 limit:(const struct WCTExpr *)arg3;
- (id)getObjectsLimit:(const struct WCTExpr *)arg1 offset:(const struct WCTExpr *)arg2;
- (id)getObjectsOrderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg1 offset:(const struct WCTExpr *)arg2;
- (id)getObjectsOrderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg1 limit:(const struct WCTExpr *)arg2;
- (id)getObjectsWhere:(const struct WCTExpr *)arg1 offset:(const struct WCTExpr *)arg2;
- (id)getObjectsWhere:(const struct WCTExpr *)arg1 limit:(const struct WCTExpr *)arg2;
- (id)getObjectsWhere:(const struct WCTExpr *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2;
- (id)getObjectsOffset:(const struct WCTExpr *)arg1;
- (id)getObjectsLimit:(const struct WCTExpr *)arg1;
- (id)getObjectsOrderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg1;
- (id)getObjectsWhere:(const struct WCTExpr *)arg1;
- (id)getAllObjects;
- (id)getOneDistinctValueOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 offset:(const struct WCTExpr *)arg4;
- (id)getOneDistinctValueOnResult:(const struct WCTResult *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 offset:(const struct WCTExpr *)arg3;
- (id)getOneDistinctValueOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 offset:(const struct WCTExpr *)arg3;
- (id)getOneDistinctValueOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3;
- (id)getOneDistinctValueOnResult:(const struct WCTResult *)arg1 offset:(const struct WCTExpr *)arg2;
- (id)getOneDistinctValueOnResult:(const struct WCTResult *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2;
- (id)getOneDistinctValueOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2;
- (id)getOneDistinctValueOnResult:(const struct WCTResult *)arg1;
- (id)getOneValueOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 offset:(const struct WCTExpr *)arg4;
- (id)getOneValueOnResult:(const struct WCTResult *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 offset:(const struct WCTExpr *)arg3;
- (id)getOneValueOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 offset:(const struct WCTExpr *)arg3;
- (id)getOneValueOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3;
- (id)getOneValueOnResult:(const struct WCTResult *)arg1 offset:(const struct WCTExpr *)arg2;
- (id)getOneValueOnResult:(const struct WCTResult *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2;
- (id)getOneValueOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2;
- (id)getOneValueOnResult:(const struct WCTResult *)arg1;
- (struct NSArray *)getOneDistinctColumnOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 limit:(const struct WCTExpr *)arg4 offset:(const struct WCTExpr *)arg5;
- (struct NSArray *)getOneDistinctColumnOnResult:(const struct WCTResult *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 limit:(const struct WCTExpr *)arg3 offset:(const struct WCTExpr *)arg4;
- (struct NSArray *)getOneDistinctColumnOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 limit:(const struct WCTExpr *)arg3 offset:(const struct WCTExpr *)arg4;
- (struct NSArray *)getOneDistinctColumnOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 offset:(const struct WCTExpr *)arg4;
- (struct NSArray *)getOneDistinctColumnOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 limit:(const struct WCTExpr *)arg4;
- (struct NSArray *)getOneDistinctColumnOnResult:(const struct WCTResult *)arg1 limit:(const struct WCTExpr *)arg2 offset:(const struct WCTExpr *)arg3;
- (struct NSArray *)getOneDistinctColumnOnResult:(const struct WCTResult *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 offset:(const struct WCTExpr *)arg3;
- (struct NSArray *)getOneDistinctColumnOnResult:(const struct WCTResult *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 limit:(const struct WCTExpr *)arg3;
- (struct NSArray *)getOneDistinctColumnOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 offset:(const struct WCTExpr *)arg3;
- (struct NSArray *)getOneDistinctColumnOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 limit:(const struct WCTExpr *)arg3;
- (struct NSArray *)getOneDistinctColumnOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3;
- (struct NSArray *)getOneDistinctColumnOnResult:(const struct WCTResult *)arg1 offset:(const struct WCTExpr *)arg2;
- (struct NSArray *)getOneDistinctColumnOnResult:(const struct WCTResult *)arg1 limit:(const struct WCTExpr *)arg2;
- (struct NSArray *)getOneDistinctColumnOnResult:(const struct WCTResult *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2;
- (struct NSArray *)getOneDistinctColumnOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2;
- (struct NSArray *)getOneDistinctColumnOnResult:(const struct WCTResult *)arg1;
- (struct NSArray *)getOneColumnOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 limit:(const struct WCTExpr *)arg4 offset:(const struct WCTExpr *)arg5;
- (struct NSArray *)getOneColumnOnResult:(const struct WCTResult *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 limit:(const struct WCTExpr *)arg3 offset:(const struct WCTExpr *)arg4;
- (struct NSArray *)getOneColumnOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 limit:(const struct WCTExpr *)arg3 offset:(const struct WCTExpr *)arg4;
- (struct NSArray *)getOneColumnOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 offset:(const struct WCTExpr *)arg4;
- (struct NSArray *)getOneColumnOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 limit:(const struct WCTExpr *)arg4;
- (struct NSArray *)getOneColumnOnResult:(const struct WCTResult *)arg1 limit:(const struct WCTExpr *)arg2 offset:(const struct WCTExpr *)arg3;
- (struct NSArray *)getOneColumnOnResult:(const struct WCTResult *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 offset:(const struct WCTExpr *)arg3;
- (struct NSArray *)getOneColumnOnResult:(const struct WCTResult *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 limit:(const struct WCTExpr *)arg3;
- (struct NSArray *)getOneColumnOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 offset:(const struct WCTExpr *)arg3;
- (struct NSArray *)getOneColumnOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 limit:(const struct WCTExpr *)arg3;
- (struct NSArray *)getOneColumnOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3;
- (struct NSArray *)getOneColumnOnResult:(const struct WCTResult *)arg1 offset:(const struct WCTExpr *)arg2;
- (struct NSArray *)getOneColumnOnResult:(const struct WCTResult *)arg1 limit:(const struct WCTExpr *)arg2;
- (struct NSArray *)getOneColumnOnResult:(const struct WCTResult *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2;
- (struct NSArray *)getOneColumnOnResult:(const struct WCTResult *)arg1 where:(const struct WCTExpr *)arg2;
- (struct NSArray *)getOneColumnOnResult:(const struct WCTResult *)arg1;
- (struct NSArray *)getOneRowOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 offset:(const struct WCTExpr *)arg4;
- (struct NSArray *)getOneRowOnResults:(const struct WCTResultList *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 offset:(const struct WCTExpr *)arg3;
- (struct NSArray *)getOneRowOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 offset:(const struct WCTExpr *)arg3;
- (struct NSArray *)getOneRowOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3;
- (struct NSArray *)getOneRowOnResults:(const struct WCTResultList *)arg1 offset:(const struct WCTExpr *)arg2;
- (struct NSArray *)getOneRowOnResults:(const struct WCTResultList *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2;
- (struct NSArray *)getOneRowOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2;
- (struct NSArray *)getOneRowOnResults:(const struct WCTResultList *)arg1;
- (id)getOneObjectOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3 offset:(const struct WCTExpr *)arg4;
- (id)getOneObjectOnResults:(const struct WCTResultList *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 offset:(const struct WCTExpr *)arg3;
- (id)getOneObjectOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 offset:(const struct WCTExpr *)arg3;
- (id)getOneObjectOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg3;
- (id)getOneObjectOnResults:(const struct WCTResultList *)arg1 offset:(const struct WCTExpr *)arg2;
- (id)getOneObjectOnResults:(const struct WCTResultList *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2;
- (id)getOneObjectOnResults:(const struct WCTResultList *)arg1 where:(const struct WCTExpr *)arg2;
- (id)getOneObjectOnResults:(const struct WCTResultList *)arg1;
- (id)getOneObjectWhere:(const struct WCTExpr *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2 offset:(const struct WCTExpr *)arg3;
- (id)getOneObjectOrderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg1 offset:(const struct WCTExpr *)arg2;
- (id)getOneObjectWhere:(const struct WCTExpr *)arg1 offset:(const struct WCTExpr *)arg2;
- (id)getOneObjectWhere:(const struct WCTExpr *)arg1 orderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg2;
- (id)getOneObjectOffset:(const struct WCTExpr *)arg1;
- (id)getOneObjectOrderBy:(const struct list<const WCDB::Order, std::__1::allocator<const WCDB::Order>> *)arg1;
- (id)getOneObjectWhere:(const struct WCTExpr *)arg1;
- (id)getOneObject;

@end
