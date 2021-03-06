//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUICollectionViewCellManagerDelegate-Protocol.h"
#import "NFUIManagedCollectionViewControllerDelegate-Protocol.h"
#import "NFUISearchPrequeryCollectionViewCellDelegate-Protocol.h"

@class NFUICollectionViewCellManager, NFUIManagedCollectionViewController, NFUIPrequeryCollectionViewFlowLayout, NFUIPrequerySearchViewModel, NSNumber, NSString, NavigationBarAppearanceManager, UICollectionView;
@protocol NFUISearchPrequeryListControllerDelegate;

@interface NFUISearchPrequeryListController : NSObject <NFUISearchPrequeryCollectionViewCellDelegate, NFUIManagedCollectionViewControllerDelegate, NFUICollectionViewCellManagerDelegate>
{
    _Bool _isPrequeryListEmpty;
    _Bool _scrollViewDragged;
    NFUICollectionViewCellManager *_cellManager;
    id <NFUISearchPrequeryListControllerDelegate> _delegate;
    NFUIPrequerySearchViewModel *_prequeryViewModel;
    NFUIManagedCollectionViewController *_managedCollectionView;
    NFUIPrequeryCollectionViewFlowLayout *_flowLayout;
    NSNumber *_sessionPresentationID;
    NSNumber *_lastCommandId;
}

@property(retain, nonatomic) NSNumber *lastCommandId; // @synthesize lastCommandId=_lastCommandId;
@property(retain, nonatomic) NSNumber *sessionPresentationID; // @synthesize sessionPresentationID=_sessionPresentationID;
@property(nonatomic) _Bool scrollViewDragged; // @synthesize scrollViewDragged=_scrollViewDragged;
@property(retain, nonatomic) NFUIPrequeryCollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) NFUIManagedCollectionViewController *managedCollectionView; // @synthesize managedCollectionView=_managedCollectionView;
@property(nonatomic) _Bool isPrequeryListEmpty; // @synthesize isPrequeryListEmpty=_isPrequeryListEmpty;
@property(retain, nonatomic) NFUIPrequerySearchViewModel *prequeryViewModel; // @synthesize prequeryViewModel=_prequeryViewModel;
@property(nonatomic) __weak id <NFUISearchPrequeryListControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NFUICollectionViewCellManager *cellManager; // @synthesize cellManager=_cellManager;
- (void).cxx_destruct;
- (void)logEndFocusEventForFocusID:(id)arg1;
- (id)logStartFocusEventForPrequeryItemViewModel:(id)arg1;
- (void)logEndShowingPrequery;
- (void)logPresentationOfVisibleItems;
- (void)logStartPrequeryPresentationEvent;
- (void)logStartPrequeryContext;
- (void)logStartPrequeryChangeCommandValue;
- (void)goToCollectionViewForViewModel:(id)arg1;
- (void)playTitleForViewModel:(id)arg1;
- (void)goToDisplayPageForViewModel:(id)arg1;
- (void)didTapAccessoryButtonForViewModel:(id)arg1;
- (void)didTapRowForViewModel:(id)arg1;
- (struct CGSize)sizeForModel:(id)arg1 forIndexPath:(id)arg2 forKind:(id)arg3 withCellManager:(id)arg4 shouldCacheSizeResult:(_Bool *)arg5;
- (id)dequeueCellForModel:(id)arg1 forIndexPath:(id)arg2 forKind:(id)arg3 withCellManager:(id)arg4;
- (id)configureCellWithViewModel:(id)arg1 withModel:(id)arg2 forIndexPath:(id)arg3 forKind:(id)arg4 withCellManager:(id)arg5 shouldCacheResult:(_Bool *)arg6;
- (void)didScrollEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)didScrollEndDecelerating:(id)arg1;
- (double)minimumLineSpacingForSection:(long long)arg1;
- (struct UIEdgeInsets)insetsForSection:(long long)arg1;
- (id)modelForIndexPath:(id)arg1 forKind:(id)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)relayoutPrequeryCollectionView;
- (void)reloadCollectionViewSafely:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UICollectionView *collectionView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NavigationBarAppearanceManager *navBarManager;
@property(readonly) Class superclass;

@end

