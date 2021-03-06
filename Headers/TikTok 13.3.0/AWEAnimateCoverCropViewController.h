//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEVideoRangeSliderDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AVAsset, AVAssetExportSession, AVAssetImageGenerator, AVPlayer, AVPlayerLayer, AWEVideoRangeSlider, NSArray, NSString, NSTimer, NSURL, UICollectionView, UINavigationController, UIView;
@protocol UIGestureRecognizerDelegate;

@interface AWEAnimateCoverCropViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, AWEVideoRangeSliderDelegate, UIScrollViewDelegate>
{
    _Bool _moveVertially;
    _Bool _videoVertially;
    float _posXOfVideo;
    float _posYOfVideo;
    float _actualVideoHeight;
    float _actualVideoWidth;
    _Bool _initialContentOffsetSet;
    _Bool _screenGestureEnabled;
    NSURL *_videoURL;
    CDUnknownBlockType _completion;
    UIView *_videoWindowView;
    UIView *_videoContainerView;
    UIView *_contentView;
    AVAsset *_videoAsset;
    UICollectionView *_collectionView;
    AVPlayer *_avPlayer;
    AVPlayerLayer *_playerLayer;
    NSArray *_thumbnailImageArray;
    AVAssetExportSession *_exportSession;
    NSString *_tmpVideoPath;
    double _initialContentOffset;
    double _duration;
    AWEVideoRangeSlider *_videoRangeSlider;
    NSTimer *_playbackTimer;
    id <UIGestureRecognizerDelegate> _originalDelegate;
    UINavigationController *_backupedNavigationController;
    NSArray *_observers;
    AVAssetImageGenerator *_imageGenerator;
    long long _rotateFactor;
    double _maxDuration;
    double _durationRate;
    long long _thumbCount;
    struct CGSize _normalItemSize;
}

+ (id)exportPresetCompatibleWithAsset:(id)arg1;
@property(nonatomic) long long thumbCount; // @synthesize thumbCount=_thumbCount;
@property(nonatomic) double durationRate; // @synthesize durationRate=_durationRate;
@property(nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic) struct CGSize normalItemSize; // @synthesize normalItemSize=_normalItemSize;
@property(nonatomic) long long rotateFactor; // @synthesize rotateFactor=_rotateFactor;
@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(retain, nonatomic) NSArray *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool screenGestureEnabled; // @synthesize screenGestureEnabled=_screenGestureEnabled;
@property(nonatomic) UINavigationController *backupedNavigationController; // @synthesize backupedNavigationController=_backupedNavigationController;
@property(nonatomic) id <UIGestureRecognizerDelegate> originalDelegate; // @synthesize originalDelegate=_originalDelegate;
@property(retain, nonatomic) NSTimer *playbackTimer; // @synthesize playbackTimer=_playbackTimer;
@property(retain, nonatomic) AWEVideoRangeSlider *videoRangeSlider; // @synthesize videoRangeSlider=_videoRangeSlider;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double initialContentOffset; // @synthesize initialContentOffset=_initialContentOffset;
@property(nonatomic) _Bool initialContentOffsetSet; // @synthesize initialContentOffsetSet=_initialContentOffsetSet;
@property(retain, nonatomic) NSString *tmpVideoPath; // @synthesize tmpVideoPath=_tmpVideoPath;
@property(retain, nonatomic) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property(retain, nonatomic) NSArray *thumbnailImageArray; // @synthesize thumbnailImageArray=_thumbnailImageArray;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *videoContainerView; // @synthesize videoContainerView=_videoContainerView;
@property(retain, nonatomic) UIView *videoWindowView; // @synthesize videoWindowView=_videoWindowView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (void).cxx_destruct;
- (long long)orientationForTrack:(id)arg1;
- (void)play;
- (void)updatePlaybackTime:(id)arg1;
- (void)validPlayTimer;
- (void)cancelButtonClicked:(id)arg1;
- (id)videoCompsitionWithAsset:(id)arg1;
- (void)nextButtonClicked:(id)arg1;
- (void)backButtonClicked:(id)arg1;
- (void)videoRangeDidChangByPosition:(double)arg1 movedType:(unsigned long long)arg2;
- (void)videoRangeDidEndByType:(unsigned long long)arg1;
- (void)videoRangeDidBeginByType:(unsigned long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)videoPlayerTapped:(id)arg1;
- (void)videoDubbing:(id)arg1 music:(id)arg2;
- (void)recordPerfermance:(id)arg1;
- (void)moviePlay;
- (void)movieStop;
- (void)moviePause;
- (double)convertCurrentPlaybackTimeToPosition:(double)arg1;
- (double)convertVideoPlayPositionToCurrent:(double)arg1;
- (void)deleteTmpFile;
- (void)setupVideoRangeSlider;
- (void)layoutVideoThumbnails;
- (void)resetInitialCutposition;
- (void)moveToCut:(id)arg1;
- (void)setupVideoPlayer;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersNavigationBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)deCompositionVideoFile:(id)arg1 atTimes:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)updateThumbnail;
- (void)reload;
- (void)addNotificationObservers;
- (void)buildDragLabel;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

