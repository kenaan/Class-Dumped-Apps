//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEUserLoginBaseViewModel.h"

@class NSString;

@interface AWEUserLoginSetPasswordViewModel : AWEUserLoginBaseViewModel
{
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setPassword:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isPasswordValid:(id)arg1 errMsg:(id *)arg2;

@end

