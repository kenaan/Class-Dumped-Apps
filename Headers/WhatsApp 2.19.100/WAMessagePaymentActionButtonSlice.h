//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class NSString;
@protocol WAMessagePaymentActionButtonSliceDelegate;

@interface WAMessagePaymentActionButtonSlice : WAMessageContainerSlice
{
    _Bool _divider;
    int _type;
    id <WAMessagePaymentActionButtonSliceDelegate> _delegate;
    NSString *_messageUniqueID;
}

+ (Class)viewClass;
@property(readonly, copy, nonatomic) NSString *messageUniqueID; // @synthesize messageUniqueID=_messageUniqueID;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool divider; // @synthesize divider=_divider;
@property(nonatomic) __weak id <WAMessagePaymentActionButtonSliceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)invalidateLayout;
- (void)internalFitToWidth:(double)arg1;
- (void)dealloc;
- (id)initWithMessages:(id)arg1 metrics:(CDStruct_f481d0b7)arg2 type:(int)arg3;

@end

