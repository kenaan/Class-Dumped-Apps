//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MDXAdPlayerOverlayViewDelegate.h"
#import "MDXSessionObserver.h"
#import "MDXVideoProgressObserver.h"
#import "YTResponder.h"

@class GIMMe, MDXAdPlayerOverlayView, MDXSession, NSString, YTIAdPlayerOverlayRenderer, YTPlayerResponse;

@interface MDXAdsPlayerOverlayViewController : UIViewController <MDXAdPlayerOverlayViewDelegate, MDXSessionObserver, MDXVideoProgressObserver, YTResponder>
{
    MDXAdPlayerOverlayView *_playerOverlayView;
    YTIAdPlayerOverlayRenderer *_adPlayerOverlayRenderer;
    YTPlayerResponse *_adPlayerResponse;
    MDXSession *_session;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)updateOverlayButtons;
- (void)videoDidProgressToTime:(double)arg1;
- (void)adPlayerOverlayViewDidTapVisitSiteButton:(id)arg1;
- (void)adPlayerOverlayViewDidTapAdInfo:(id)arg1;
- (void)adPlayerOverlayViewDidTapSkipAd:(id)arg1;
- (void)basePlayerOverlayDidTapOverflowButton:(id)arg1;
- (void)didTapReplay;
- (void)basePlayerOverlayDidTapPause:(id)arg1;
- (void)basePlayerOverlayDidTapPlay:(id)arg1;
- (void)MDXSession:(id)arg1 playerStateDidChange:(long long)arg2;
- (void)didReceiveAdWatchNextResponseForMDXSession:(id)arg1;
- (void)didReceiveAdPlayerResponseForMDXSession:(id)arg1;
- (void)didStartAdSessionForMDXSession:(id)arg1;
- (void)loadView;
- (id)initWithSession:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

