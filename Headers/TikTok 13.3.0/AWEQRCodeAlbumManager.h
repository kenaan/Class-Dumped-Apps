//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol AWEQRCodeAlbumManagerDelegate;

@interface AWEQRCodeAlbumManager : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    _Bool _isPHAuthorization;
    _Bool _isDetectingQRCode;
    id <AWEQRCodeAlbumManagerDelegate> _delegate;
    UIViewController *_currentVC;
    NSString *_detectorString;
}

+ (id)sharedManager;
@property(nonatomic) _Bool isDetectingQRCode; // @synthesize isDetectingQRCode=_isDetectingQRCode;
@property(retain, nonatomic) NSString *detectorString; // @synthesize detectorString=_detectorString;
@property(nonatomic) __weak UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(nonatomic) _Bool isPHAuthorization; // @synthesize isPHAuthorization=_isPHAuthorization;
@property(nonatomic) __weak id <AWEQRCodeAlbumManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)enterImagePickerController;
- (void)readQRCodeFromAlbumWithCurrentController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

