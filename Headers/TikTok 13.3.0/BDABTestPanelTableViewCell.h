//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel;

@interface BDABTestPanelTableViewCell : UITableViewCell
{
    NSString *_key;
    NSString *_owner;
    NSString *_desc;
    UILabel *_keyLabel;
    UILabel *_ownerLabel;
    UILabel *_descLabel;
}

@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *ownerLabel; // @synthesize ownerLabel=_ownerLabel;
@property(retain, nonatomic) UILabel *keyLabel; // @synthesize keyLabel=_keyLabel;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

