//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEProfileEditViewModel, NSString;

@interface AWEProfileEditItemModel : NSObject
{
    long long _type;
    NSString *_title;
    NSString *_placeholder;
    NSString *_detail;
    NSString *_key;
    AWEProfileEditViewModel *_viewModel;
}

@property(retain, nonatomic) AWEProfileEditViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 viewModel:(id)arg2;

@end

