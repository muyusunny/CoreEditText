//
//  SUNBQuickUIMacrocDefine.h
//  CoreEditText
//
//  Created by Sunny on 16-1-20.
//  Copyright (c) 2016年 Sunny. All rights reserved.
//

/**
 *  UI相关的快速访问工具宏
 */

#import "SUNBQuickUIUitil.h"

/**
 *  将0-360的角度转换为圆角度表示
 *
 *  @param degree
 *
 *  @return 真实的角度表示
 */
#define SUNBDegreeToRadius(degree) (degree * M_PI / 180)

/**
 *  获取角度对应的NSNumber对象
 */
#define SUNBDegreeToRadiusValue(degree) @(SUNBDegreeToRadius(degree))

/**
 *  快速得到RGB颜色
 */
#define SUNBQuickRGBColor(redValue,greenValue,blueValue) [SUNBQuickUIUitil colorFromRed:redValue green:greenValue blue:blueValue]

/**
 *  获取带alpha值的RGB颜色
 */
#define SUNBQuickRGBColorAlpha(redValue,greenValue,blueValue,alpha) [SUNBQuickUIUitil colorFromRed:redValue green:greenValue blue:blueValue withAlpha:alpha]

/**
 *  从16进制字符中得到颜色
 */
#define SUNBQuickHexColor(hexString) [SUNBQuickUIUitil colorFromHexString:hexString]

/**
 *  从一个View获取翻转的文本绘制的图形上下文CGContextRef
 */
#define SUNBContextRefTextMatrixFromView(aView) [SUNBQuickUIUitil getTextCTMContextRefFromView:aView]

/**
 *  快速获取图片
 */
#define SUNBQuickImage(imageName) [SUNBQuickUIUitil imageWithName:imageName]

/**
 *  修正图片方向
 *
 */
#define SUNBFixOretationImage(aImage) [SUNBQuickUIUitil fixOretationImage:aImage]

/**
 *  创建圆角图片
 */
#define SUNBRoundCornerImage(aImage,cornerSize,boardSize) [SUNBQuickUIUitil createRoundCornerImage:aImage withCornerSize:cornerSize withBoardSize:boardSize]

/**
 *  组合图片
 */
#define SUNBQuickCombineImage(backgroundImage,maskImage) [SUNBQuickUIUitil combineImage:backgroundImage withMaskImage:maskImage]

/**
 *  返回圆形图片,默认用白色作为遮挡颜色
 */
#define SUNBCycleImage(aImage) [SUNBQuickUIUitil roundImage:aImage]

/**
 *  截取Rect部分的图片
 */
#define SUNBPartImage(aImage,rect) [SUNBQuickUIUitil partImage:aImage withRect:rect]

/**
 *  返回纠正方向后得图片
 */
#define SUNBCorrectOrientationImage(aImage) [SUNBQuickUIUitil correctImageOrientation:aImage]

/**
 *  返回一个纠正了方向并且进行了scale倍数缩放的图片
 */
#define SUNBCorrectOrientationImageWithScale(aImage,scale) [SUNBQuickUIUitil correctImageOrientation:aImage withScaleSize:scale]

/**
 *  返回ALAsset纠正方向后并且进行了scale倍数缩放的fullResolutionImage图片
 */
#define SUNBCorrectOrientationALAssetFullResolutionImageWithScale(aALAsset,scale) [SUNBQuickUIUitil  correctFullSolutionImageFromALAsset:aALAsset withScaleSize:scale]

/**
 *  返回ALAsset纠正方向后的fullResolutionImage图片
 */
#define SUNBCorrectOrientationALAssetFullResolutionImage(aALAsset) [SUNBQuickUIUitil correctFullSolutionImageFromALAsset:aALAsset]

/**
 *  获取一个View的截图
 */
#define SUNBScreenShotFromView(aView) [SUNBQuickUIUitil viewScreenShot:aView]

/**
 *  获取一个Layer的截图
 */
#define SUNBScreenShotFromLayer(aLayer) [SUNBQuickUIUitil layerScreenShot:aLayer]

/**
 *  按照aColor颜色创建一张size大小的图片
 *
 */
#define SUNBQuickImageByColorWithSize(aColor,size) [SUNBQuickUIUitil imageForColor:aColor withSize:size]

/**
 *  创建一个线性渐变图片
 *
 *  @param colors    按顺序渐变颜色数组
 *  @param size      需要创建的图片的大小
 *
 *  最大只支持三种颜色，起始位置颜色，中间颜色，结束颜色
 *  依次位置为 0,0.5,1.0
 *  超过3种颜色也只取前三种颜色为渐变色
 *
 *  @return 返回渐变颜色图片
 */
#define SUNBLinearGradientImageByColorsWithSize(colors,size) [SUNBQuickUIUitil gradientLinearImageFromColors:colors withImageSize:size]

/**
 *  创建线性渐变图片
 *
 *  @param fromColor 起始发颜色
 *  @param toColor   中间颜色
 *  @param size      图片大小
 *
 *  @return 渐变图片
 */
#define SUNBLinearGradientImageFromColorToColor(fromColor,toColor,size) [SUNBQuickUIUitil gradientLinearImageFromColor:fromColor withToColor:toColor withImageSize:size]

/**
 *  创建球形渐变图片
 *
 *  @param fromColor 中心颜色
 *  @param toColor   外层颜色
 *  @param size      图片大小
 *
 *  @return 渐变图片
 */
#define SUNBRadialGradientImageFromColorToColor(fromColor,toColor,size) [SUNBQuickUIUitil gradientRadialImageFromColor:fromColor withToColor:toColor withImageSize:size]

/**
 *  创建球形渐变图片
 *
 *  @param colors 颜色值数组
 *  @param size 图片大小
 *
 *  @return 渐变图片
 */
#define SUNBRadialGradientImageByColorsWithSize(colors,size) [SUNBQuickUIUitil gradientRadialImageFromColors:colors withImageSize:size]

/**
 *  创建网格线图片
 *
 *  @param lineGap 格线距离
 *  @param color   格线颜色
 *  @param size    图片大小
 *
 *  @return 网格线图片
 */
#define SUNBGridImageByLineGapAndColorWithSize(lineGap,color,size) [SUNBQuickUIUitil gridImageByHoriLineGap:lineGap withVerticalLineGap:lineGap withLineColor:color withImageSize:size]

/**
 *  创建水平网格线图片
 *
 *  @param lineGap 格线距离
 *  @param color   格线颜色
 *  @param size    图片大小
 *
 *  @return 网格线图片
 */
#define SUNBGridImageHorizByLineGapAndColorWithSize(lineGap,color,size) [SUNBQuickUIUitil gridImageHorizonByLineGap:lineGap withLineColor:color withImageSize:size]

/**
 *  创建垂直网格线图片
 *
 *  @param lineGap 格线距离
 *  @param color   格线颜色
 *  @param size    图片大小
 *
 *  @return 网格线图片
 */
#define SUNBGridImageVerticalByLineGapAndColorWithSize(lineGap,color,size) [SUNBQuickUIUitil gridImageVerticalByLineGap:lineGap withLineColor:color withImageSize:size]

/**
 *  快速从文件夹读取图片
 */
#define SUNBQuickImageByFilePath(filePath) [SUNBQuickUIUitil imageWithFilePath:filePath]

/**
 *  快速从归档路径读取图片
 */
#define SUNBQuickUnArchievedImage(filePath) [SUNBQuickUIUitil imageUnArchievedFromFilePath:filePath]

/**
 *  获取拉伸的图片
 *
 *  @param image      原图片
 *  @param leftOffset 左边起始位置
 *  @param topOffset  顶部起始位置
 *
 *  @return 返回拉伸后的图片
 */
#define SUNBImageStrecth(image,leftOffset,topOffset) [SUNBQuickUIUitil stretchImage:image withTopOffset:topOffset withLeftOffset:leftOffset]

/**
 *  获取重设大小拉伸后的图片
 *
 *  @param image  原图片
 *  @param top    顶部起始位置
 *  @param bottom 底部起始位置
 *  @param left   左边起始位置
 *  @param right  右边起始位置
 *
 *  @return 重设大小拉伸后后的图片
 */
#define SUNBImageResize(image,top,bottom,left,right) [SUNBQuickUIUitil resizeImage:image withEdgeTop:top withEdgeBottom:bottom withEdgeLeft:left withEdgeRight:right]

/**
 *  以duration持续时间执行一个UIView动画block
 */
#define SUNBAnimationWithDuration(duration,block) [SUNBQuickUIUitil animationDuration:duration action:block]

/**
 *  延迟second秒，以duration持续时间执行一个UIView动画block
 */
#define SUNBAnimationDelayWithDuration(second,duration,block) [SUNBQuickUIUitil animationDelay:second animationDuration:duration action:block]

/**
 *  默认隐藏显示视图动画
 */
#define SUNBAnimationHiddenShowView(view) [SUNBQuickUIUitil defaultHiddenShowView:view]

/**
 *  指定duration时长隐藏显示动画
 */
#define SUNBAnimationHiddenShowViewDuration(view,duration) [SUNBQuickUIUitil hiddenShowView:view withDuration:duration]

/**
 *  默认显示隐藏视图动画
 */
#define SUNBAnimationShowHiddenView(view) [SUNBQuickUIUitil defaultShowHiddenView:view]

/**
 *  指定duration时长显示隐藏动画
 */
#define SUNBAnimationShowHiddenViewDuration(view,duration) [SUNBQuickUIUitil showHiddenView:view withDuration:duration]

/**
 *  默认隐藏视图动画
 */
#define SUNBAnimationHiddenView(view) [SUNBQuickUIUitil defaultHiddenView:view]

/**
 *  指定duration时长隐藏动画
 */
#define SUNBAnimationHiddenViewDuration(view,duration) [SUNBQuickUIUitil hiddenView:view withDuration:duration]

/**
 *  默认显示视图动画
 */
#define SUNBAnimationShowView(view) [SUNBQuickUIUitil defaultShowView:view]

/**
 *  指定duration时长显示视图动画
 */
#define SUNBAnimationShowViewDuration(view,duration) [SUNBQuickUIUitil showView:view withDuration:duration]

/**
 *  指定duration时间长度，从当前视图alpha到目标alpha
 */
#define SUNBAnimationShowAlphaViewDuration(view,alpha,duration) [SUNBQuickUIUitil showView:view finalAlpha:alpha withDuration:duration]

/**
 *  移动当前视图到指定rect的动画,不支持便捷写法的CGRect  CGRect{20,20,20,20} 这种写法是不支持的需要使用CGRectMake
 */
#define SUNBAnimationMoveViewRect(view,rect,duration) [SUNBQuickUIUitil moveView:view newRect:rect withDuration:duration]

/**
 *  x轴增量移动动画
 */
#define SUNBAnimationMoveViewX(view,xDetal,duration) [SUNBQuickUIUitil moveViewX:view originXDetal:xDetal withDuration:duration]

/**
 *  y轴增量移动动画
 */
#define SUNBAnimationMoveViewY(view,yDetal,duration) [SUNBQuickUIUitil moveViewY:view originYDetal:yDetal withDuration:duration]

/**
 *  width增量变化动画
 */
#define SUNBAnimationMoveViewWidth(view,detal,duration) [SUNBQuickUIUitil moveViewWidth:view widthDetal:detal withDuration:duration]

/**
 *  height增量变化动画
 */
#define SUNBAnimationMoveViewHeight(view,detal,duration) [SUNBQuickUIUitil moveViewHeight:view heightDetal:detal withDuration:duration]

/**
 *  移动到指定x轴点动画
 */
#define SUNBAnimationMoveViewToX(view,toX,duration) [SUNBQuickUIUitil moveViewToX:view toOriginX:toX withDuration:duration]

/**
 *  移动到指定y轴点动画
 */
#define SUNBAnimationMoveViewToY(view,toY,duration) [SUNBQuickUIUitil moveViewToY:view toOriginY:toY withDuration:duration]

/**
 *  指定视图width到目标宽度的动画
 */
#define SUNBAnimationMoveViewToWidth(view,width,duration) [SUNBQuickUIUitil moveViewToWidth:view toWidth:width withDuration:duration]

/**
 *  指定视图height到目标高度的动画
 */
#define SUNBAnimationMoveViewToHeight(view,height,duration) [SUNBQuickUIUitil moveViewToHeight:view toHeight:height withDuration:duration]

/**
 *  移动视图中心动画 不支持便捷写法的CGPoint  (CGPoint){20,20} 这种写法是不支持的需要使用CGPointMake
 */
#define SUNBAnimationMoveViewCenter(view,center,duration) [SUNBQuickUIUitil moveViewCenter:view newCenter:center withDuration:duration]

/**
 *  缩放视图大小动画,不支持便捷写法的CGSize  (CGSize){20,20} 这种写法是不支持的,需要使用CGSizeMake
 */
#define SUNBAnimationMoveViewSize(view,size,duration) [SUNBQuickUIUitil moveViewSize:view newSize:size withDuration:duration]

/**
 *  从左开始翻转视图动画
 */
#define SUNBAnimationLeftFlipView(view,duration,block,completion) [SUNBQuickUIUitil flipViewFromLeft:view withDuration:duration action:block completionBlock:completion]

/**
 *  从右开始翻转视图动画
 */
#define SUNBAnimationRightFlipView(view,duration,block,completion) [SUNBQuickUIUitil flipViewFromRight:view withDuration:duration action:block completionBlock:completion]

/**
 *  从顶部开始翻转视图动画
 */
#define SUNBAnimationTopFlipView(view,duration,block,completion) [SUNBQuickUIUitil flipViewFromTop:view withDuration:duration action:block completionBlock:completion]

/**
 *  从底部开始翻转视图动画
 */
#define SUNBAnimationBottomFlipView(view,duration,block,completion) [SUNBQuickUIUitil flipViewFromBottom:view withDuration:duration action:block completionBlock:completion]

/**
 *  向上翻页动画
 */
#define SUNBAnimationPageUpView(view,duration,block,completion) [SUNBQuickUIUitil pageUpViewFromBottom:view withDuration:duration action:block completionBlock:completion]

/**
 *  向下翻页动画
 */
#define SUNBAnimationPageDownView(view,duration,block,completion) [SUNBQuickUIUitil pageDownViewFromTop:view withDuration:duration action:block completionBlock:completion]

/**
 *  立体翻转动画
 */
#define SUNBAnimationCubeView(view,duration,block,completion) [SUNBQuickUIUitil cubeView:view withDuration:duration  action:block completionBlock:completion]

/**
 *  绕X轴倾斜视图degree角度  degree范围:0-360
 */
#define SUNBAnimationViewRotateX(view,degree,duration) [SUNBQuickUIUitil rotationViewX:view withDegree:degree withDuration:duration]

/**
 *  绕Y轴倾斜视图degree角度  degree范围:0-360
 */
#define SUNBAnimationViewRotateY(view,degree,duration) [SUNBQuickUIUitil rotationViewY:view withDegree:degree withDuration:duration]

/**
 *  绕Z轴倾斜视图degree角度  degree范围:0-360
 */
#define SUNBAnimationViewRotateZ(view,degree,duration) [SUNBQuickUIUitil rotationViewZ:view withDegree:degree withDuration:duration]

/**
 *  translationX动画
 */
#define SUNBAnimationViewTranslationX(view,originX,duration) [SUNBQuickUIUitil translationViewX:view withOriginX:originX withDuration:duration]

/**
 *  translationY动画
 */
#define SUNBAnimationViewTranslationY(view,originY,duration) [SUNBQuickUIUitil translationViewY:view withOriginY:originY withDuration:duration]

/**
 *  translationZ动画
 */
#define SUNBAnimationViewTranslationZ(view,originZ,duration) [SUNBQuickUIUitil translationViewZ:view withOriginZ:originZ withDuration:duration]

/**
 *  scaleX动画
 */
#define SUNBAnimationViewScaleX(view,size,duration) [SUNBQuickUIUitil scaleViewX:view withScaleSize:size withDuration:duration]

/**
 *  scaleY动画
 */
#define SUNBAnimationViewScaleY(view,size,duration) [SUNBQuickUIUitil scaleViewY:view withScaleSize:size withDuration:duration]

/**
 *  scaleZ动画
 */
#define SUNBAnimationViewScaleZ(view,size,duration) [SUNBQuickUIUitil scaleViewZ:view withScaleSize:size withDuration:duration]

/**
 *  将视图绕X轴倾斜degree角度，degree范围 -360到360
 */
#define SUNBView3DRotateX(view,degree) [SUNBQuickUIUitil view3DRotateX:view withDegree:degree]

/**
 *  将视图绕Y轴倾斜degree角度，degree范围 -360到360
 */
#define SUNBView3DRotateY(view,degree) [SUNBQuickUIUitil view3DRotateY:view withDegree:degree]

/**
 *  将视图绕Z轴倾斜degree角度，degree范围 -360到360
 */
#define SUNBView3DRotateZ(view,degree) [SUNBQuickUIUitil view3DRotateZ:view withDegree:degree]

/**
 *  X轴变换
 */
#define SUNBView3DTranslateX(view,value) [SUNBQuickUIUitil view3DTranslateX:view withValue:value]

/**
 *  Y轴变换
 */
#define SUNBView3DTranslateY(view,value) [SUNBQuickUIUitil view3DTranslateY:view withValue:value]

/**
 *  Z轴变换
 */
#define SUNBView3DTranslateZ(view,value) [SUNBQuickUIUitil view3DTranslateZ:view withValue:value]

/**
 *  X轴方向缩放,代表一个缩放比例，一般都是 0 --- 1 之间的数字
 */
#define SUNBView3DScaleX(view,value) [SUNBQuickUIUitil view3DScaleX:view withValue:value]

/**
 *  Y轴方向缩放,代表一个缩放比例，一般都是 0 --- 1 之间的数字
 */
#define SUNBView3DScaleY(view,value) [SUNBQuickUIUitil view3DScaleY:view withValue:value]

/**
 *  Z轴方向缩放,整体比例变换时，也就是m11（sx）== m22（sy）时，若m33（sz）>1，图形整体缩小，若0<1，
 *  图形整体放大，若m33（sz）<0，发生关于原点的对称等比变换
 */
#define SUNBView3DScaleZ(view,value) [SUNBQuickUIUitil view3DScaleZ:view withValue:value]

/**
 *  重复某个block
 */
#define SUNBRepeatAction(repeatBlock) [SUNBQuickUIUitil repeatDoAction:repeatBlock]

/**
 *  延迟second秒开始重复某个动作
 */
#define SUNBRepeatActionDelay(second,repeatBlock) [SUNBQuickUIUitil repeatDoAction:repeatBlock withDelay:second]

/**
 *  重复某个动作duration时长
 */
#define SUNBRepeatActionDuration(duration,repeatBlock) [SUNBQuickUIUitil repeatDoAction:repeatBlock withRepeatDuration:duration]

/**
 *  延迟某个动作second秒，并且只执行duration时长
 */
#define SUNBRepeatActionDelayDuration(second,duration,repeatBlock) [SUNBQuickUIUitil repeatDoAction:repeatBlock withDelay:second withRepeatDuration:duration]

/**
 *  根据blockIdentifier停止某个block重复动作
 */
#define SUNBStopRepeatAction(blockIdentifier) [SUNBQuickUIUitil stopRepeatAction:blockIdentifier]

/**
 *  X轴上以moveXDetal偏移量一个来回,moveXDetal > 0
 */
#define SUNBAnimationViewXCycle(view,moveXDetal,duration) [SUNBQuickUIUitil animationViewXCycle:view withXMoveDetal:moveXDetal withDuration:duration]

/**
 *  Y轴上以moveYDetal偏移量一个来回,moveYDetal > 0
 */
#define SUNBAnimationViewYCycle(view,moveYDetal,duration) [SUNBQuickUIUitil animationViewYCycle:view withYMoveDetal:moveYDetal withDuration:duration]

/**
 *  Z轴上以moveZDetal偏移量一个来回,moveZDetal > 0
 */
#define SUNBAnimationViewZCycle(view,moveZDetal,duration) [SUNBQuickUIUitil animationViewZCycle:view withZMoveDetal:moveZDetal withDuration:duration]

/**
 *  绕X轴上以degree角度为偏移量一个来回,degree: 0-360
 */
#define SUNBAnimationViewRotateXCycle(view,degree,duration) [SUNBQuickUIUitil animationViewRotateXCycle:view withXRotateDetal:degree withDuration:duration]

/**
 *  绕Y轴上以degree角度为偏移量一个来回,degree: 0-360
 */
#define SUNBAnimationViewRotateYCycle(view,degree,duration) [SUNBQuickUIUitil animationViewRotateYCycle:view withYRotateDetal:degree withDuration:duration]

/**
 *  绕Z轴上以degree角度为偏移量一个来回,degree: 0-360
 */
#define SUNBAnimationViewRotateZCycle(view,degree,duration) [SUNBQuickUIUitil animationViewRotateZCycle:view withZRotateDetal:degree withDuration:duration]

/**
 *  fromValue到toValue的position移动CAAnimation
 *  animationKey 为 @"gjcf_animation_position"
 *
 */
#define SUNBCAAnimationPosition(aLayer,fromValue,toValue,repeatCount,duration) [SUNBQuickUIUitil animationLayer:aLayer positionCenterWithFromValue:fromValue withToValue:toValue withRepeatCount:repeatCount  withDuration:duration]

/**
 *  fromValue到toValue的position.x移动CAAnimation
 *  animationKey 为 @"gjcf_animation_position.x"
 */
#define SUNBCAAnimationPositionX(aLayer,fromValue,toValue,repeatCount,duration) [SUNBQuickUIUitil animationLayer:aLayer positionXWithFromValue:fromValue withToValue:toValue withRepeatCount:repeatCount withDuration:duration]

/**
 *  fromValue到toValue的position.y移动CAAnimation
 *  animationKey 为 @"gjcf_animation_position.y"
 */
#define SUNBCAAnimationPositionY(aLayer,fromValue,toValue,repeatCount,duration) [SUNBQuickUIUitil animationLayer:aLayer positionYWithFromValue:fromValue withToValue:toValue withRepeatCount:repeatCount withDuration:duration]

/**
 *  按照value移动postion的CAAnimation
 *  animationKey 为 @"gjcf_animation_by_position"
 */
#define SUNBCAAnimationPositionByValue(aLayer,value,repeatCount,duration) [SUNBQuickUIUitil animationLayer:aLayer positionCenterByValue:value  withRepeatCount:repeatCount  withDuration:duration]

/**
 *  按照value移动postion.x的CAAnimation
 *  animationKey 为 @"gjcf_animation_by_position.x"
 */
#define SUNBCAAnimationPositionXByValue(aLayer,value,repeatCount,duration) [SUNBQuickUIUitil animationLayer:aLayer positionXByValue:value withRepeatCount:repeatCount withDuration:duration]

/**
 *  按照value移动postion.y的CAAnimation
 *  animationKey 为 @"gjcf_animation_by_position.y"
 */
#define SUNBCAAnimationPositionYByValue(aLayer,value,repeatCount,duration) [SUNBQuickUIUitil animationLayer:aLayer positionYByValue:value withRepeatCount:repeatCount withDuration:duration]

/**
 *  按照指定路径做动画
 */
#define SUNBAnimationPathByValue(aLayer,aPath,value,repeatCount,duration) [SUNBQuickUIUitil animationLayer:aLayer path:aPath ByValue:value  withRepeatCount:repeatCount  withDuration:duration]




