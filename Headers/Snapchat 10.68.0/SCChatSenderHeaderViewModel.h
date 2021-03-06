//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString;

@interface SCChatSenderHeaderViewModel : NSObject <NSCopying>
{
    NSAttributedString *_senderHeaderText;
    unsigned long long _sendingDisplayType;
    struct CGSize _labelSize;
    struct UIEdgeInsets _margins;
}

@property(readonly, nonatomic) unsigned long long sendingDisplayType; // @synthesize sendingDisplayType=_sendingDisplayType;
@property(readonly, nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property(readonly, nonatomic) struct CGSize labelSize; // @synthesize labelSize=_labelSize;
@property(readonly, copy, nonatomic) NSAttributedString *senderHeaderText; // @synthesize senderHeaderText=_senderHeaderText;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSenderHeaderText:(id)arg1 labelSize:(struct CGSize)arg2 margins:(struct UIEdgeInsets)arg3 sendingDisplayType:(unsigned long long)arg4;

@end

