//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSLiveLiveEcomMessage, NSNumber, NSString;

@interface IESLiveECommerceUserEnterNode : NSObject
{
    HTSLiveLiveEcomMessage *_message;
    NSNumber *_purchaseCount;
    NSString *_nickName;
    NSString *_ecommerceText;
    NSString *_ecommerceIconURLString;
}

@property(copy, nonatomic) NSString *ecommerceIconURLString; // @synthesize ecommerceIconURLString=_ecommerceIconURLString;
@property(copy, nonatomic) NSString *ecommerceText; // @synthesize ecommerceText=_ecommerceText;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSNumber *purchaseCount; // @synthesize purchaseCount=_purchaseCount;
@property(retain, nonatomic) HTSLiveLiveEcomMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)initWithECommerceMessage:(id)arg1;

@end

