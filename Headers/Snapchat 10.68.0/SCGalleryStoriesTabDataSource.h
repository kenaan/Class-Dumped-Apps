//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMergedGalleryDataSourceListener-Protocol.h"

@class NSDictionary, NSString, SCMergedGalleryDataSource, SCQueuePerformer;
@protocol SCGalleryStoriesTabDataSourceDelegate;

@interface SCGalleryStoriesTabDataSource : NSObject <SCMergedGalleryDataSourceListener>
{
    SCMergedGalleryDataSource *_memoriesDataSource;
    SCQueuePerformer *_performer;
    _Bool _selectEntriesMode;
    NSDictionary *_viewModelMaps;
    NSString *_excludedItemIdentifier;
    id <SCGalleryStoriesTabDataSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGalleryStoriesTabDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *excludedItemIdentifier; // @synthesize excludedItemIdentifier=_excludedItemIdentifier;
- (void).cxx_destruct;
- (void)dataSource:(id)arg1 didChangeEntries:(id)arg2 failedEntries:(id)arg3 fetchEntryError:(id)arg4;
- (id)_viewModelWithEntry:(id)arg1 previousViewModel:(id)arg2;
- (void)didUpdateExpandStateForViewModel:(id)arg1;
- (void)collapseAllViewModels:(id)arg1;
- (id)initWithMemoriesDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

