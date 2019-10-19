//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AWEPriorityQueue : NSObject
{
    NSMutableArray *_array;
}

@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)removeAllElements;
- (unsigned long long)p_binarySearchForInsert:(id)arg1;
- (void)deleteHighestPriorityElement;
- (id)getHighestPriorityElement;
- (void)insertElement:(id)arg1;
- (id)init;

@end

