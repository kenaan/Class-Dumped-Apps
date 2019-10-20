//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IESSettingsItem : NSObject
{
    _Bool _selected;
    _Bool _invalid;
    long long _type;
    NSString *_title;
    NSString *_selectedTitle;
    NSString *_iconName;
    NSString *_selectedIconName;
    CDUnknownBlockType _clickAction;
}

+ (id)itemWithTitle:(id)arg1 selectedTitle:(id)arg2 iconName:(id)arg3 selectedIconName:(id)arg4 itemType:(long long)arg5 action:(CDUnknownBlockType)arg6;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(retain, nonatomic) NSString *selectedIconName; // @synthesize selectedIconName=_selectedIconName;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(retain, nonatomic) NSString *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;

@end
