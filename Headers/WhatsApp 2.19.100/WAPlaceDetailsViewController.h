//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebContentViewController.h"

@class WAPlace;
@protocol WALegacyShareLocationControllerDelegate;

@interface WAPlaceDetailsViewController : WAWebContentViewController
{
    WAPlace *_waPlace;
    id <WALegacyShareLocationControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WALegacyShareLocationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAPlace *waPlace; // @synthesize waPlace=_waPlace;
- (void).cxx_destruct;
- (void)fetchWAPlaceURL;
- (void)sendPlaceAction:(id)arg1;
- (void)viewDidLoad;
- (id)initWithWAPlace:(id)arg1 delegate:(id)arg2;

@end

