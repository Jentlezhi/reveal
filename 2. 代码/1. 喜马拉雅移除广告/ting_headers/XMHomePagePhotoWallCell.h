//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, UIButton, UIImageView, UILabel, UIView, XMHomePagePerson;

@interface XMHomePagePhotoWallCell : UITableViewCell
{
    CDUnknownBlockType _didClickAddButton;
    CDUnknownBlockType _didClickPhoto;
    UIView *_noDataCView;
    UIImageView *_noDataIV;
    UILabel *_addLB;
    UIButton *_addBtn;
    UIView *_photoCView;
    NSMutableArray *_photoMArr;
    XMHomePagePerson *_homepagePerson;
}

+ (double)viewHeightWithDataSource:(id)arg1;
@property(retain, nonatomic) XMHomePagePerson *homepagePerson; // @synthesize homepagePerson=_homepagePerson;
@property(retain, nonatomic) NSMutableArray *photoMArr; // @synthesize photoMArr=_photoMArr;
@property(retain, nonatomic) UIView *photoCView; // @synthesize photoCView=_photoCView;
@property(retain, nonatomic) UIButton *addBtn; // @synthesize addBtn=_addBtn;
@property(retain, nonatomic) UILabel *addLB; // @synthesize addLB=_addLB;
@property(retain, nonatomic) UIImageView *noDataIV; // @synthesize noDataIV=_noDataIV;
@property(retain, nonatomic) UIView *noDataCView; // @synthesize noDataCView=_noDataCView;
@property(copy, nonatomic) CDUnknownBlockType didClickPhoto; // @synthesize didClickPhoto=_didClickPhoto;
@property(copy, nonatomic) CDUnknownBlockType didClickAddButton; // @synthesize didClickAddButton=_didClickAddButton;
- (void).cxx_destruct;
- (void)setDataSource:(id)arg1;
- (void)didClickWebIV:(id)arg1;
- (void)addBtnTouch:(id)arg1;
- (void)initWithSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

