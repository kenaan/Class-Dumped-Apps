//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableIndexSet;

@interface AWEIMGroupChangeInfo : NSObject
{
    NSMutableArray *_updateIndexPaths;
    NSMutableArray *_insertIndexPaths;
    NSMutableArray *_deleteIndexPaths;
    NSMutableIndexSet *_updateSections;
    NSMutableIndexSet *_insertSections;
    NSMutableIndexSet *_deleteSections;
}

@property(retain, nonatomic) NSMutableIndexSet *deleteSections; // @synthesize deleteSections=_deleteSections;
@property(retain, nonatomic) NSMutableIndexSet *insertSections; // @synthesize insertSections=_insertSections;
@property(retain, nonatomic) NSMutableIndexSet *updateSections; // @synthesize updateSections=_updateSections;
@property(retain, nonatomic) NSMutableArray *deleteIndexPaths; // @synthesize deleteIndexPaths=_deleteIndexPaths;
@property(retain, nonatomic) NSMutableArray *insertIndexPaths; // @synthesize insertIndexPaths=_insertIndexPaths;
@property(retain, nonatomic) NSMutableArray *updateIndexPaths; // @synthesize updateIndexPaths=_updateIndexPaths;
- (void).cxx_destruct;
- (id)init;

@end

