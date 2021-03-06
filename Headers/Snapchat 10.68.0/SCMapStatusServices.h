//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCMapStatusServices : NSObject
{
    SCLazy *_mapStatusFetcher;
    SCLazy *_mapStatusMutator;
    SCLazy *_mapStatusViewedStateProvider;
    SCLazy *_mapStatusViewedStateMutator;
}

@property(readonly, nonatomic) SCLazy *mapStatusViewedStateMutator; // @synthesize mapStatusViewedStateMutator=_mapStatusViewedStateMutator;
@property(readonly, nonatomic) SCLazy *mapStatusViewedStateProvider; // @synthesize mapStatusViewedStateProvider=_mapStatusViewedStateProvider;
@property(readonly, nonatomic) SCLazy *mapStatusMutator; // @synthesize mapStatusMutator=_mapStatusMutator;
@property(readonly, nonatomic) SCLazy *mapStatusFetcher; // @synthesize mapStatusFetcher=_mapStatusFetcher;
- (void).cxx_destruct;
- (id)initWithMapStatusFetcher:(id)arg1 mapStatusMutator:(id)arg2 mapStatusViewedStateMutator:(id)arg3 mapStatusViewedStateProvider:(id)arg4;

@end

