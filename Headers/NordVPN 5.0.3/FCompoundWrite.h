//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FImmutableTree;

@interface FCompoundWrite : NSObject
{
    FImmutableTree *_writeTree;
}

+ (id)emptyWrite;
+ (id)compoundWriteWithNodeDictionary:(id)arg1;
+ (id)compoundWriteWithValueDictionary:(id)arg1;
@property(retain, nonatomic) FImmutableTree *writeTree; // @synthesize writeTree=_writeTree;
- (void).cxx_destruct;
- (id)description;
- (id)valForExport:(_Bool)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)rootWrite;
- (_Bool)isEmpty;
- (id)applyToNode:(id)arg1;
- (void)enumerateWrites:(CDUnknownBlockType)arg1;
- (id)applySubtreeWrite:(id)arg1 atPath:(id)arg2 toNode:(id)arg3;
- (id)childCompoundWriteAtPath:(id)arg1;
- (id)childCompoundWrites;
- (id)completeChildren;
- (id)completeNodeAtPath:(id)arg1;
- (_Bool)hasCompleteWriteAtPath:(id)arg1;
- (id)removeWriteAtPath:(id)arg1;
- (id)addCompoundWrite:(id)arg1 atPath:(id)arg2;
- (id)addWrite:(id)arg1 atKey:(id)arg2;
- (id)addWrite:(id)arg1 atPath:(id)arg2;
- (id)initWithWriteTree:(id)arg1;

@end
