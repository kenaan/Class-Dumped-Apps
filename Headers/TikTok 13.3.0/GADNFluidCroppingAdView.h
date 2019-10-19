//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GADNObserverCollection;

@interface GADNFluidCroppingAdView : UIView
{
    UIView *_view;
    GADNObserverCollection *_observers;
    id _messageSource;
    double _contentHeight;
}

@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateContentHeightValueFromNotification:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithView:(id)arg1 messageSource:(id)arg2;

@end

