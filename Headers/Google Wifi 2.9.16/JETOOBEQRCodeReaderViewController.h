//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETOOBEViewController.h"

#import "JETQRCodeReaderViewDelegate-Protocol.h"

@class JETQRCodeReaderView;

@interface JETOOBEQRCodeReaderViewController : JETOOBEViewController <JETQRCodeReaderViewDelegate>
{
    JETQRCodeReaderView *_readerView;
}

@property(retain, nonatomic) JETQRCodeReaderView *readerView; // @synthesize readerView=_readerView;
- (void).cxx_destruct;
- (void)updateFlashlightButton;
- (void)flashlightButtonTapped;
- (void)closeButtonTapped;
- (void)captureAnimationCompleted;
- (double)topOverlapHeight;
- (id)setupSSID;
- (id)QRCodeReaderView:(id)arg1 didFindCode:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

@end
