//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AWEASMusicHistorySuggestionManager : NSObject
{
    NSMutableArray *_dataList;
}

@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
- (void).cxx_destruct;
- (void)p_updateData;
- (void)fetchHistorySuggestionWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAllQueries;
- (void)removeQuery:(id)arg1;
- (void)save:(id)arg1;

@end

