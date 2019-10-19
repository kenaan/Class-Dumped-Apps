//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMMessage.h"

@class AWEIMLinkTextUtility, NSArray, NSAttributedString, NSDictionary, NSString;

@interface AWEIMCompanyMessage : AWEIMMessage
{
    NSString *_originContent;
    NSString *_pushDetail;
    NSDictionary *_actions;
    NSAttributedString *_forwardPreviewAttributedText;
    AWEIMLinkTextUtility *_textUtility;
}

+ (id)contentAttributes;
@property(retain, nonatomic) AWEIMLinkTextUtility *textUtility; // @synthesize textUtility=_textUtility;
@property(retain, nonatomic) NSAttributedString *forwardPreviewAttributedText; // @synthesize forwardPreviewAttributedText=_forwardPreviewAttributedText;
@property(retain, nonatomic) NSDictionary *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) NSString *pushDetail; // @synthesize pushDetail=_pushDetail;
@property(copy, nonatomic) NSString *originContent; // @synthesize originContent=_originContent;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *linkArray; // @dynamic linkArray;
@property(copy, nonatomic) NSString *content; // @dynamic content;
- (id)calculateAttributedContent;
- (id)getContentDict;
- (id)initWithContentDict:(id)arg1;

@end

