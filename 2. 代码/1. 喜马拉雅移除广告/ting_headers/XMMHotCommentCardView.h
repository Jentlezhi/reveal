//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseView.h"

@class UIButton, UIImageView, UILabel, UIView, XMMComment, XMMHotCommentCardViewLayout, YYLabel;

@interface XMMHotCommentCardView : XMMBaseView
{
    XMMComment *_hotComment;
    UIImageView *_fireIcon;
    UIButton *_avatarButton;
    UILabel *_nickNameLabel;
    UIButton *_praiseButton;
    UIView *_contentView;
    YYLabel *_detailLabel;
    YYLabel *_praiseCountLabel;
}

@property(retain, nonatomic) YYLabel *praiseCountLabel; // @synthesize praiseCountLabel=_praiseCountLabel;
@property(retain, nonatomic) YYLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *praiseButton; // @synthesize praiseButton=_praiseButton;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIButton *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(retain, nonatomic) UIImageView *fireIcon; // @synthesize fireIcon=_fireIcon;
@property(retain, nonatomic) XMMComment *hotComment; // @synthesize hotComment=_hotComment;
- (void).cxx_destruct;
- (void)p_updateDataWithModel:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(retain, nonatomic) XMMHotCommentCardViewLayout *layout; // @dynamic layout;
- (void)didInitialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

