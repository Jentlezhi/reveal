//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMFindFlowWhiteBackTableViewCell.h"

@class CAShapeLayer, UIButton, UIImageView, UIView, XMFeedsFlowInfoView, XMFlowModel, XMTableCellObject, XMWebImageView, YYLabel;
@protocol XMRecFlowTrackCellDelegate;

@interface XMVIPAlbumFeedFlowCell : XMFindFlowWhiteBackTableViewCell
{
    id <XMRecFlowTrackCellDelegate> _delegate;
    XMFlowModel *_model;
    UIView *_backView;
    XMWebImageView *_coverImageView;
    UIImageView *_tagImageView;
    YYLabel *_titleLabel;
    YYLabel *_introLabel;
    YYLabel *_nicknameLabel;
    YYLabel *_playCountLabel;
    UIView *_introBackView;
    UIButton *_reasonButton;
    UIButton *_unlikeButton;
    UIView *_lineView;
    CAShapeLayer *_lineShapeLayer;
    XMTableCellObject *_cellObject;
    XMFeedsFlowInfoView *_infosView;
}

+ (id)cellObjectWithCellModel:(id)arg1 customDelegate:(id)arg2;
+ (id)getIntroWithModel:(id)arg1;
+ (id)getTitleWithModel:(id)arg1;
+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMFeedsFlowInfoView *infosView; // @synthesize infosView=_infosView;
@property(retain, nonatomic) XMTableCellObject *cellObject; // @synthesize cellObject=_cellObject;
@property(retain, nonatomic) CAShapeLayer *lineShapeLayer; // @synthesize lineShapeLayer=_lineShapeLayer;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *unlikeButton; // @synthesize unlikeButton=_unlikeButton;
@property(retain, nonatomic) UIButton *reasonButton; // @synthesize reasonButton=_reasonButton;
@property(retain, nonatomic) UIView *introBackView; // @synthesize introBackView=_introBackView;
@property(retain, nonatomic) YYLabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) YYLabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) YYLabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) YYLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) XMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) XMFlowModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <XMRecFlowTrackCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateDisplayLabelColor;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)albumUnlikeReasonViewDidClickReason:(id)arg1;
- (void)p_unlikeDidClick:(id)arg1;
- (void)setTagImage;
- (void)makeConstraints;
- (void)setUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

@end

