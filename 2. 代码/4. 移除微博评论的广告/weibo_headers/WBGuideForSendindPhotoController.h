//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPHAssetImagePickerPhotoController.h"

@protocol WBComposeGuideForPhotoViewDelegate;

@interface WBGuideForSendindPhotoController : WBPHAssetImagePickerPhotoController
{
    struct CGRect _rect;
    double _lastOffset;
    _Bool _hidden;
    id <WBComposeGuideForPhotoViewDelegate> _guideForPhotoViewDelegate;
}

+ (unsigned long long)_cutoffTime;
+ (void)getLatestPhotoAndCompletion:(CDUnknownBlockType)arg1;
+ (void)isShouldShow:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) __weak id <WBComposeGuideForPhotoViewDelegate> guideForPhotoViewDelegate; // @synthesize guideForPhotoViewDelegate=_guideForPhotoViewDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)registersPeekingGesture;
- (id)resultAtIndex:(unsigned long long)arg1;
- (id)fetchOptions;
- (void)didBecomeActive:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)didPressedCameraButton;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (_Bool)isIndependentView;
- (void)updateSendPhotoView:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

