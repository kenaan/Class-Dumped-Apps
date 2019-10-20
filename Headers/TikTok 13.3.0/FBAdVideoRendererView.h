//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBMediaViewVideoRenderer.h"

@protocol FBAdVideoRendererViewDelegate;

@interface FBAdVideoRendererView : FBMediaViewVideoRenderer
{
    id <FBAdVideoRendererViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBAdVideoRendererViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoDidFailWithError:(id)arg1;
- (void)videoDidEnd;
- (void)videoDidDisengageSeek;
- (void)videoDidSeek;
- (void)videoDidEngageSeek;
- (void)videoDidPlay;
- (void)videoDidPause;
- (void)videoDidLoad;
- (void)videoDidChangeVolume;
- (id)init;

@end
