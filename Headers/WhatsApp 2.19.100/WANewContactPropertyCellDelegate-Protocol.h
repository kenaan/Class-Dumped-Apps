//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class WANewContactPropertyCell, WAUserJID;

@protocol WANewContactPropertyCellDelegate
- (void)newContactPropertyCell:(WANewContactPropertyCell *)arg1 requestContactViewControllerForUserJID:(WAUserJID *)arg2;
- (void)newContactPropertyCellNeedResize:(WANewContactPropertyCell *)arg1;
- (void)newContactPropertyCellDidCollapse:(WANewContactPropertyCell *)arg1;
- (void)newContactPropertyCellDidExpand:(WANewContactPropertyCell *)arg1;
- (void)newContactPropertyCellRequestLabelPicker:(WANewContactPropertyCell *)arg1;
- (void)newContactPropertyCellRequestAddressCountryPicker:(WANewContactPropertyCell *)arg1;
- (void)newContactPropertyCellRequestCountryPicker:(WANewContactPropertyCell *)arg1;
- (_Bool)newContactPropertCellShouldReturn:(WANewContactPropertyCell *)arg1;
- (void)newContactPropertCellValueDidChange:(WANewContactPropertyCell *)arg1;
- (void)newContactPropertCellDidEndEditing:(WANewContactPropertyCell *)arg1;
- (void)newContactPropertCellDidBeginEditing:(WANewContactPropertyCell *)arg1;
@end

