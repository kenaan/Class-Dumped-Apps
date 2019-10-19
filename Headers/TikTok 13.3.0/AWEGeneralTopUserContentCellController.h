//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEAVPlayerWrapperDelegate-Protocol.h"
#import "AWEAwemeDetailTableViewControllerDelegate-Protocol.h"
#import "AWEModernFeedCellControllerProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AWEAVPlayerWrapper, AWEGeneralSearchModel, AWEGeneralSearchScrollTailView, AWEMusicModel, NSArray, NSIndexPath, NSString, UICollectionView, UIView;
@protocol AWEGeneralTopUserOSTContentControllerDelegate, AWEModernFeedCellContext;

@interface AWEGeneralTopUserContentCellController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEAVPlayerWrapperDelegate, AWEAwemeDetailTableViewControllerDelegate, AWEModernFeedCellControllerProtocol>
{
    _Bool _isTransfering;
    _Bool _isDownloadingMusic;
    id <AWEModernFeedCellContext> _context;
    UICollectionView *_contentCollectionView;
    NSArray *_contentArray;
    AWEGeneralSearchModel *_searchModel;
    NSString *_keyWord;
    Class _cellClass;
    UIView *_dividingLine;
    NSString *_userID;
    AWEGeneralSearchScrollTailView *_footerView;
    id <AWEGeneralTopUserOSTContentControllerDelegate> _playerDelegate;
    AWEAVPlayerWrapper *_audioPlayer;
    AWEMusicModel *_playingMusic;
    NSIndexPath *_selectedIndexPath;
}

+ (Class)getCellClass:(id)arg1;
+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
+ (void)__awe__codeRunnerRun_112;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) _Bool isDownloadingMusic; // @synthesize isDownloadingMusic=_isDownloadingMusic;
@property(retain, nonatomic) AWEMusicModel *playingMusic; // @synthesize playingMusic=_playingMusic;
@property(retain, nonatomic) AWEAVPlayerWrapper *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) __weak id <AWEGeneralTopUserOSTContentControllerDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
@property(nonatomic) _Bool isTransfering; // @synthesize isTransfering=_isTransfering;
@property(retain, nonatomic) AWEGeneralSearchScrollTailView *footerView; // @synthesize footerView=_footerView;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) UIView *dividingLine; // @synthesize dividingLine=_dividingLine;
@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(copy, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(retain, nonatomic) AWEGeneralSearchModel *searchModel; // @synthesize searchModel=_searchModel;
@property(copy, nonatomic) NSArray *contentArray; // @synthesize contentArray=_contentArray;
@property(retain, nonatomic) UICollectionView *contentCollectionView; // @synthesize contentCollectionView=_contentCollectionView;
@property(retain, nonatomic) id <AWEModernFeedCellContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)addDividingLine;
- (void)configContentArray:(id)arg1;
- (void)playerWrapper:(id)arg1 didChangePlayStatus:(unsigned long long)arg2;
- (_Bool)detailTableViewControllerShouldUseFeedImageCache:(id)arg1;
- (void)detailTableViewController:(id)arg1 scrollDidEndAtIndexPath:(id)arg2 model:(id)arg3;
- (_Bool)isIndexPathValid:(id)arg1;
- (void)dealloc;
- (void)audioPlayMusicWithModel:(id)arg1;
- (void)didSelectMusicAtIndexPath:(id)arg1;
- (void)cancelAudioPlay;
- (void)configureAudio;
- (void)forceBecomeActive;
- (void)updateWithModel:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

