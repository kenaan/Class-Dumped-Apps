//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATSimpleElement.h"

@protocol SCATGestureFingersElementDelegate;

@interface SCATGestureFingersElement : SCATSimpleElement
{
    id <SCATGestureFingersElementDelegate> _delegate;
}

@property(nonatomic) __weak id <SCATGestureFingersElementDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)scatSpeakableDescription;
- (_Bool)scatPerformAction:(int)arg1;
- (void)scatDidBecomeFocused:(_Bool)arg1;
- (_Bool)scatIndicatesOwnFocus;

@end
