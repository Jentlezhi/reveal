//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView, XMSubjectTopicModel, XMWebImageView;

@interface XMCategorySubjectTopicCell : UICollectionViewCell
{
    UIView *_shadowView;
    UIView *_backView;
    XMWebImageView *_subjectImageView;
    UILabel *_subjectTitleLabel;
    XMSubjectTopicModel *_model;
}

@property(retain, nonatomic) XMSubjectTopicModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *subjectTitleLabel; // @synthesize subjectTitleLabel=_subjectTitleLabel;
@property(retain, nonatomic) XMWebImageView *subjectImageView; // @synthesize subjectImageView=_subjectImageView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
- (void).cxx_destruct;
- (void)setContentWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

