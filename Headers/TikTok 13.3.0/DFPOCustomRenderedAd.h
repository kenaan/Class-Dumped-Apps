//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol DFPOCustomRenderedAdEventHandler;

@interface DFPOCustomRenderedAd : NSObject
{
    _Bool _isRendered;
    id <DFPOCustomRenderedAdEventHandler> _eventHandler;
    NSString *_adHTML;
    NSURL *_adBaseURL;
}

@property(readonly, copy, nonatomic) NSURL *adBaseURL; // @synthesize adBaseURL=_adBaseURL;
@property(readonly, copy, nonatomic) NSString *adHTML; // @synthesize adHTML=_adHTML;
- (void).cxx_destruct;
- (void)finishedRenderingAdView:(id)arg1;
- (void)recordImpression;
- (void)recordClick;
- (id)init;
- (id)initWithAdHTML:(id)arg1 adBaseURL:(id)arg2 eventHandler:(id)arg3;

@end

