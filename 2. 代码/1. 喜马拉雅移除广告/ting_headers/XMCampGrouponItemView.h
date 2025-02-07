//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIButton, UILabel, XMCampGrouponItemModel, XMWebImageView;

@interface XMCampGrouponItemView : UIView
{
    _Bool _isExpire;
    UILabel *_dateLabel;
    XMCampGrouponItemModel *_model;
    UIView *_backView;
    UILabel *_userLabel;
    XMWebImageView *_userImageView;
    UIButton *_grouponButton;
    UILabel *_personLabel;
    CAGradientLayer *_buttonLayer;
    CDUnknownBlockType _grouponButtonClickedBlock;
    CDUnknownBlockType _grouponChangeToGuoQiBlock;
}

@property(copy, nonatomic) CDUnknownBlockType grouponChangeToGuoQiBlock; // @synthesize grouponChangeToGuoQiBlock=_grouponChangeToGuoQiBlock;
@property(copy, nonatomic) CDUnknownBlockType grouponButtonClickedBlock; // @synthesize grouponButtonClickedBlock=_grouponButtonClickedBlock;
@property(nonatomic) _Bool isExpire; // @synthesize isExpire=_isExpire;
@property(retain, nonatomic) CAGradientLayer *buttonLayer; // @synthesize buttonLayer=_buttonLayer;
@property(retain, nonatomic) UILabel *personLabel; // @synthesize personLabel=_personLabel;
@property(retain, nonatomic) UIButton *grouponButton; // @synthesize grouponButton=_grouponButton;
@property(retain, nonatomic) XMWebImageView *userImageView; // @synthesize userImageView=_userImageView;
@property(retain, nonatomic) UILabel *userLabel; // @synthesize userLabel=_userLabel;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) XMCampGrouponItemModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
- (void).cxx_destruct;
- (id)hourWithInvetal:(long long)arg1;
- (void)enableGrouponButton;
- (void)showDateContent;
- (void)changeDaojishifWithModel;
- (void)showContentWithModel:(id)arg1;
- (void)grouponButtonClicked;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

