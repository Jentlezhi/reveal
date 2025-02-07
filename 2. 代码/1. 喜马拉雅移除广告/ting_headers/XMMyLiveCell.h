//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveTableViewCell.h"

@class UIButton, UIImageView, UILabel, XMLiveRoomApproachInfo, XMWebImageView;
@protocol XMMyLiveCellDelegate;

@interface XMMyLiveCell : XMLiveTableViewCell
{
    XMWebImageView *_coverImgView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_tagImageView;
    UILabel *_noticeLabel;
    UIButton *_menuBtn;
    UIButton *_actionBtn;
    id <XMMyLiveCellDelegate> _delegate;
    XMLiveRoomApproachInfo *_liveItem;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) XMLiveRoomApproachInfo *liveItem; // @synthesize liveItem=_liveItem;
@property(nonatomic) __weak id <XMMyLiveCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onActionButtonClicked;
- (void)onMenuButtonClicked;
- (void)layoutSubviews;
- (void)customInitView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

