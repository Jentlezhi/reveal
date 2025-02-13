//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class UIButton, UIImageView, UILabel, XMMaybeFriendsItem, XMTableCellObject, XMWebImageView, YYLabel;
@protocol XMMaybeFriendsCellDelegate;

@interface XMMaybeFriendsCell : XMTableViewCell
{
    XMMaybeFriendsItem *_item;
    id <XMMaybeFriendsCellDelegate> _delegate;
    XMWebImageView *_icon;
    UIImageView *_vLogoIcon;
    UILabel *_titleLabel;
    YYLabel *_subtitleLabel;
    UIButton *_followBtn;
    XMTableCellObject *_cellObject;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMTableCellObject *cellObject; // @synthesize cellObject=_cellObject;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) YYLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *vLogoIcon; // @synthesize vLogoIcon=_vLogoIcon;
@property(retain, nonatomic) XMWebImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak id <XMMaybeFriendsCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMMaybeFriendsItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)didClickFollowButton;
- (void)changeFollowButtonSate:(unsigned long long)arg1;
- (void)changeInviteButtonSate:(_Bool)arg1;
- (void)customInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

