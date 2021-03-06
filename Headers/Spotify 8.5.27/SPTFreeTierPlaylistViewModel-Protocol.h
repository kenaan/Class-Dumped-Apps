//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTFreeTierPlaylistDefaultHeaderViewModel-Protocol.h"
#import "SPTFreeTierPlaylistFollowViewModel-Protocol.h"
#import "SPTFreeTierPlaylistFullbleedHeaderViewModel-Protocol.h"
#import "SPTFreeTierPlaylistItemsViewModel-Protocol.h"

@class NSIndexPath, NSString, NSURL;
@protocol SPTFreeTierPlaylistCloudViewModel, SPTFreeTierPlaylistSortingFiltering, SPTFreeTierPlaylistSponsoredViewModel, SPTFreeTierPlaylistTrackViewModel, SPTFreeTierPlaylistViewModelDelegate;

@protocol SPTFreeTierPlaylistViewModel <SPTFreeTierPlaylistFollowViewModel, SPTFreeTierPlaylistFullbleedHeaderViewModel, SPTFreeTierPlaylistDefaultHeaderViewModel, SPTFreeTierPlaylistItemsViewModel>
@property(readonly, nonatomic) id <SPTFreeTierPlaylistSponsoredViewModel> sponsoredViewModel;
@property(readonly, nonatomic) _Bool contentSupportsRadio;
@property(readonly, nonatomic) _Bool containsOnlyTracks;
@property(nonatomic) _Bool showTrackThumbnail;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistSortingFiltering> sortingFiltering;
@property(copy, nonatomic) NSString *textFilter;
@property(readonly, nonatomic) unsigned long long countOfTracks;
@property(readonly, nonatomic) unsigned long long offlineAvailability;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isAddSongsDisabled) _Bool addSongsDisabled;
@property(readonly, nonatomic, getter=isExtendedContextMenuActionSet) _Bool extendedContextMenuActionSet;
@property(readonly, nonatomic, getter=isAccessibilityHeaderEnabled) _Bool accessibilityHeaderEnabled;
@property(readonly, nonatomic, getter=isEditModeEnabled) _Bool editModeEnabled;
@property(readonly, nonatomic, getter=isOfflineSyncAvailable) _Bool offlineSyncAvailable;
@property(readonly, nonatomic, getter=isReportAbuseEnabled) _Bool reportAbuseEnabled;
@property(readonly, nonatomic, getter=isLikeActionPlacedInsideHeader) _Bool likeActionPlacedInsideHeader;
@property(readonly, nonatomic) _Bool isPublished;
@property(readonly, nonatomic, getter=isOwnedBySelf) _Bool ownedBySelf;
@property(readonly, copy, nonatomic) NSString *playlistName;
@property(readonly, copy, nonatomic) NSURL *playlistURL;
@property(nonatomic) __weak id <SPTFreeTierPlaylistViewModelDelegate> delegate;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (_Bool)isRecomendationsLoading;
- (void)refreshRecommendations;
- (void)addRecommendationAtIndex:(long long)arg1;
- (void)sectionHeaderButtonTapped;
- (void)deletePlaylist;
- (void)load;
- (_Bool)cellProviderSupportedForSection:(long long)arg1;
- (void)changeOffline:(_Bool)arg1;
- (void)toggleTrackBanAtIndexPath:(NSIndexPath *)arg1;
- (void)toggleTrackLikeAtIndexPath:(NSIndexPath *)arg1;
- (void)itemSelectedAtIndexPath:(NSIndexPath *)arg1;
- (id <SPTFreeTierPlaylistCloudViewModel>)cloudViewModelAtIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)indexPathForItemURI:(NSURL *)arg1;
- (NSURL *)sharingURLForTrackViewModelAtIndexPath:(NSIndexPath *)arg1;
- (id <SPTFreeTierPlaylistTrackViewModel>)trackViewModelAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)isApproachingEndIndexPath:(NSIndexPath *)arg1;
- (NSString *)titleOfSectionFooter:(unsigned long long)arg1;
- (NSString *)subTitleOfSectionHeader:(unsigned long long)arg1;
- (NSString *)titleOfSectionHeader:(unsigned long long)arg1;
- (_Bool)shouldDisplayFooterForSection:(unsigned long long)arg1;
- (_Bool)shouldDisplayBrowseRedirectButtonForSection:(unsigned long long)arg1;
- (_Bool)shouldDisplayHeaderForSection:(unsigned long long)arg1;
- (_Bool)hasMoreInSection:(unsigned long long)arg1;
- (void)loadMoreInSection:(unsigned long long)arg1;
- (unsigned long long)countOfItemsInSection:(unsigned long long)arg1;
@end

