//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface XMCreateAlbumRealNameVerificationGuideView : UIView
{
    CDUnknownBlockType _firstBtnClickedBlock;
    CDUnknownBlockType _goToVerifyBtnClickedBlock;
    CDUnknownBlockType _closeBtnClickedBlock;
    unsigned long long _viewType;
    UIView *_contentView;
    UIImageView *_checkMarkIV;
    UILabel *_infoLbl;
    UILabel *_infoLbl1;
    UILabel *_infoLbl2;
    UIButton *_cancelBtn;
    UIButton *_goToVerifyBtn;
}

+ (id)creatAlbumGuideViewWithType:(unsigned long long)arg1 CancelBlock:(CDUnknownBlockType)arg2 verifyBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UIButton *goToVerifyBtn; // @synthesize goToVerifyBtn=_goToVerifyBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UILabel *infoLbl2; // @synthesize infoLbl2=_infoLbl2;
@property(retain, nonatomic) UILabel *infoLbl1; // @synthesize infoLbl1=_infoLbl1;
@property(retain, nonatomic) UILabel *infoLbl; // @synthesize infoLbl=_infoLbl;
@property(retain, nonatomic) UIImageView *checkMarkIV; // @synthesize checkMarkIV=_checkMarkIV;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(copy, nonatomic) CDUnknownBlockType closeBtnClickedBlock; // @synthesize closeBtnClickedBlock=_closeBtnClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType goToVerifyBtnClickedBlock; // @synthesize goToVerifyBtnClickedBlock=_goToVerifyBtnClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType firstBtnClickedBlock; // @synthesize firstBtnClickedBlock=_firstBtnClickedBlock;
- (void).cxx_destruct;
- (void)closeBtnClicked;
- (void)goToVerifyBtnClicked;
- (void)cancelBtnClicked;
- (void)createUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

