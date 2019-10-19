//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, WAMessage, WAMessageQuotedItem, WAStatusAd, WAUserJID;
@protocol WAServerDate;

@interface WAStatusItem : NSObject
{
    _Bool _isStatusAd;
    WAMessage *_message;
    WAStatusAd *_statusAd;
}

@property(readonly, nonatomic) _Bool isStatusAd; // @synthesize isStatusAd=_isStatusAd;
@property(readonly, nonatomic) WAStatusAd *statusAd; // @synthesize statusAd=_statusAd;
@property(readonly, nonatomic) WAMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)removeUpdateObserver:(id)arg1;
- (void)addUpdateObserver:(id)arg1 selector:(SEL)arg2;
- (_Bool)notificationIsForItem:(id)arg1;
@property(readonly, nonatomic) NSArray *interactiveAnnotations;
@property(readonly, nonatomic) WAUserJID *activityChangesJID;
@property(readonly, nonatomic) WAUserJID *replyJID;
@property(readonly, nonatomic) WAMessageQuotedItem *quotableItem;
@property(readonly, nonatomic) NSDate<WAServerDate> *messageDate;
@property(readonly, nonatomic) _Bool hasAudio;
@property(readonly, nonatomic) _Bool hasVideo;
@property(readonly, nonatomic) _Bool isFromMe;
@property(readonly, nonatomic) _Bool isTextOrURL;
@property(readonly, nonatomic) _Bool isIncomingPSA;
@property(readonly, nonatomic) _Bool isSending;
@property(readonly, nonatomic) _Bool isDeleted;
@property(readonly, nonatomic) _Bool containsUndownloadedMedia;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *statusID;
- (id)initWithStatusAd:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (id)formattedStringForVoiceOver;

@end
