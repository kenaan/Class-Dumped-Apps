//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIColor;

@interface AWEIMCompanyTextActionModel : NSObject
{
    long long _actionType;
    NSString *_name;
    NSString *_text;
    long long _originTextLength;
    long long _textLength;
    long long _originIndex;
    NSDictionary *_extParams;
    NSString *_phoneInstanceId;
    NSString *_phoneNumber;
    NSString *_phoneEncryptKey;
    NSString *_identifier;
    UIColor *_textColor;
    UIColor *_textBGColor;
    struct _NSRange _range;
}

@property(retain, nonatomic) UIColor *textBGColor; // @synthesize textBGColor=_textBGColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *phoneEncryptKey; // @synthesize phoneEncryptKey=_phoneEncryptKey;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *phoneInstanceId; // @synthesize phoneInstanceId=_phoneInstanceId;
@property(copy, nonatomic) NSDictionary *extParams; // @synthesize extParams=_extParams;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) long long originIndex; // @synthesize originIndex=_originIndex;
@property(nonatomic) long long textLength; // @synthesize textLength=_textLength;
@property(nonatomic) long long originTextLength; // @synthesize originTextLength=_originTextLength;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

