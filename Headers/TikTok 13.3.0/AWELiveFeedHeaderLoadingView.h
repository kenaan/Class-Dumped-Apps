//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IESLiveRefreshView-Protocol.h"

@class AWEUILoadingView, NSString;

@interface AWELiveFeedHeaderLoadingView : UIView <IESLiveRefreshView>
{
    AWEUILoadingView *_loading;
}

@property(retain, nonatomic) AWEUILoadingView *loading; // @synthesize loading=_loading;
- (void).cxx_destruct;
- (void)setRetryAction:(CDUnknownBlockType)arg1;
- (void)changeToState:(unsigned long long)arg1;
- (void)setupLoading;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

