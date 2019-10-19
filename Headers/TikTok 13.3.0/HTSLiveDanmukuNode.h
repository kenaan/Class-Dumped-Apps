//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSNumber, NSString, UIColor, UIImage;

@interface HTSLiveDanmukuNode : NSObject
{
    _Bool _isHighPriority;
    _Bool _showSpecialIDMedal;
    _Bool _isHideNobleIcon;
    NSAttributedString *_content;
    NSString *_fansclubTitle;
    NSString *_brotherGroupTitle;
    NSString *_brotherGroupFontColor;
    NSArray *_brotherGroupURLs;
    NSNumber *_brotherGroupLevel;
    UIImage *_image;
    NSArray *_avatarURLs;
    NSArray *_honorURLs;
    NSArray *_fansclubURLs;
    NSArray *_nobleUrls;
    NSAttributedString *_userName;
    NSString *_userLevel;
    unsigned long long _chatType;
    NSNumber *_userID;
    NSString *_secUserID;
    NSNumber *_contentID;
    double _alpha;
    double _scale;
    NSArray *_borderURLs;
    NSArray *_medalURLs;
    UIImage *_ceremonyContentImage;
    UIColor *_fullScreenColor;
    struct UIEdgeInsets _contentImageScaleEdgeInsets;
}

@property(nonatomic) _Bool isHideNobleIcon; // @synthesize isHideNobleIcon=_isHideNobleIcon;
@property(retain, nonatomic) UIColor *fullScreenColor; // @synthesize fullScreenColor=_fullScreenColor;
@property(nonatomic) _Bool showSpecialIDMedal; // @synthesize showSpecialIDMedal=_showSpecialIDMedal;
@property(retain, nonatomic) UIImage *ceremonyContentImage; // @synthesize ceremonyContentImage=_ceremonyContentImage;
@property(retain, nonatomic) NSArray *medalURLs; // @synthesize medalURLs=_medalURLs;
@property(retain, nonatomic) NSArray *borderURLs; // @synthesize borderURLs=_borderURLs;
@property(nonatomic) struct UIEdgeInsets contentImageScaleEdgeInsets; // @synthesize contentImageScaleEdgeInsets=_contentImageScaleEdgeInsets;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool isHighPriority; // @synthesize isHighPriority=_isHighPriority;
@property(retain, nonatomic) NSNumber *contentID; // @synthesize contentID=_contentID;
@property(copy, nonatomic) NSString *secUserID; // @synthesize secUserID=_secUserID;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(nonatomic) unsigned long long chatType; // @synthesize chatType=_chatType;
@property(retain, nonatomic) NSString *userLevel; // @synthesize userLevel=_userLevel;
@property(retain, nonatomic) NSAttributedString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSArray *nobleUrls; // @synthesize nobleUrls=_nobleUrls;
@property(retain, nonatomic) NSArray *fansclubURLs; // @synthesize fansclubURLs=_fansclubURLs;
@property(retain, nonatomic) NSArray *honorURLs; // @synthesize honorURLs=_honorURLs;
@property(retain, nonatomic) NSArray *avatarURLs; // @synthesize avatarURLs=_avatarURLs;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSNumber *brotherGroupLevel; // @synthesize brotherGroupLevel=_brotherGroupLevel;
@property(retain, nonatomic) NSArray *brotherGroupURLs; // @synthesize brotherGroupURLs=_brotherGroupURLs;
@property(copy, nonatomic) NSString *brotherGroupFontColor; // @synthesize brotherGroupFontColor=_brotherGroupFontColor;
@property(copy, nonatomic) NSString *brotherGroupTitle; // @synthesize brotherGroupTitle=_brotherGroupTitle;
@property(copy, nonatomic) NSString *fansclubTitle; // @synthesize fansclubTitle=_fansclubTitle;
@property(retain, nonatomic) NSAttributedString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (_Bool)isDataComplete;
- (_Bool)isImageValid;
- (id)init;

@end

