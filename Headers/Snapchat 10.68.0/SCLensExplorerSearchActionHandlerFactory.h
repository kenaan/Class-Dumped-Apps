//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerLensActionHandlerFactory-Protocol.h"

@protocol SCLensExplorerPerformanceLogging, SCLensLiveLensPreviewCameraPresenterProtocol, SCLensUnlockerProtocol;

@interface SCLensExplorerSearchActionHandlerFactory : NSObject <SCLensExplorerLensActionHandlerFactory>
{
    id <SCLensLiveLensPreviewCameraPresenterProtocol> _liveLensPreviewPresenter;
    id <SCLensUnlockerProtocol> _lensUnlocker;
    id <SCLensExplorerPerformanceLogging> _performanceLogger;
}

- (void).cxx_destruct;
- (id)lensActionHandlerForViewController:(id)arg1;
- (id)initWithLiveLensPreviewPresenter:(id)arg1 lensUnlocker:(id)arg2 performanceLogger:(id)arg3;

@end

