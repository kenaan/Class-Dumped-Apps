//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BTDRouterViewControllerProtocol-Protocol.h"

@class NSString;

@interface AWEUploadContactAlertViewController : UIViewController <BTDRouterViewControllerProtocol>
{
    _Bool _shouldDismiss;
    _Bool _needAddressListAuthorization;
    _Bool _needUploadAddressList;
    _Bool _uploadContactsSilently;
}

+ (void)showAlertViewWithParams:(id)arg1;
+ (void)__awe__codeRunnerRun_33;
@property(nonatomic) _Bool uploadContactsSilently; // @synthesize uploadContactsSilently=_uploadContactsSilently;
@property(nonatomic) _Bool needUploadAddressList; // @synthesize needUploadAddressList=_needUploadAddressList;
@property(nonatomic) _Bool needAddressListAuthorization; // @synthesize needAddressListAuthorization=_needAddressListAuthorization;
@property(nonatomic) _Bool shouldDismiss; // @synthesize shouldDismiss=_shouldDismiss;
- (_Bool)prefersStatusBarHidden;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dismissAction;
- (void)viewDidLoad;
- (id)initWithRouterParamDict:(id)arg1;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

