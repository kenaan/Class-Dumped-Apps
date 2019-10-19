//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTCellFactory-Protocol.h"

@class NSMutableArray, NSString;

@interface YTMutableCellFactory : NSObject <YTCellFactory>
{
    NSMutableArray *_cellEntryMatchBlocks;
    NSMutableArray *_cellClasses;
    NSMutableArray *_controllerEntryMatchBlocks;
    NSMutableArray *_controllerCreationBlocks;
}

+ (id)factoryWithCellClass:(Class)arg1 cellControllerCreationBlock:(CDUnknownBlockType)arg2;
+ (id)factoryWithCellClass:(Class)arg1;
@property(retain, nonatomic) NSMutableArray *controllerCreationBlocks; // @synthesize controllerCreationBlocks=_controllerCreationBlocks;
@property(retain, nonatomic) NSMutableArray *controllerEntryMatchBlocks; // @synthesize controllerEntryMatchBlocks=_controllerEntryMatchBlocks;
@property(retain, nonatomic) NSMutableArray *cellClasses; // @synthesize cellClasses=_cellClasses;
@property(retain, nonatomic) NSMutableArray *cellEntryMatchBlocks; // @synthesize cellEntryMatchBlocks=_cellEntryMatchBlocks;
- (void).cxx_destruct;
- (id)cellClassesToRegister;
- (Class)classForEntry:(id)arg1;
- (id)cellControllerForEntry:(id)arg1 parentResponder:(id)arg2;
- (void)setCellControllerCreationBlock:(CDUnknownBlockType)arg1 forMatchingBlock:(CDUnknownBlockType)arg2;
- (void)setCellControllerCreationBlock:(CDUnknownBlockType)arg1 forKindOfEntryClass:(Class)arg2;
- (void)setCellControllerCreationBlock:(CDUnknownBlockType)arg1 forEntryClass:(Class)arg2;
- (void)setCellClass:(Class)arg1 forMatchingBlock:(CDUnknownBlockType)arg2;
- (void)setCellClass:(Class)arg1 forKindOfEntryClass:(Class)arg2;
- (void)setCellClass:(Class)arg1 forEntryClass:(Class)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
