//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentBaseHandler.h"

@protocol WAPaymentBaseHandlerDelegate;

@interface WAPaymentMXEditCardHandler : WAPaymentBaseHandler
{
    // Error parsing type: , name: card
    // Error parsing type: , name: currentErrorHandler
    // Error parsing type: , name: delegate
    // Error parsing type: , name: editCardVC
    // Error parsing type: , name: isUserInitiated
    // Error parsing type: , name: paymentManager
}

- (void).cxx_destruct;
- (id)initWithRootViewController:(id)arg1 paymentManager:(id)arg2 card:(id)arg3;
@property(nonatomic) __weak id <WAPaymentBaseHandlerDelegate> delegate; // @synthesize delegate;

@end

