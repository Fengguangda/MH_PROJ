2018 08/09
	
	app.js:  注册微信小程序的应用
			 调用一个App函数，传入一个参数
	app.json:对微信小程序应用的一个全局配置
			 注册小程序所有页面的路径
			 通过配置属性来注册，里面是个list
创建一个Helloworld的页面:
	helloworld.wxml：描述我们页面上要有哪些内容
		<view>Helloworld</view>
	helloworld.js  ：帮助注册小程序的页面，类似app.js那样，通过一个配置函数
		Page
	helloworld.json:页面的一些配置，至少要传入一个空的配置对象
	helloworld.wxss:小程序的样式
	
通过app.json来注册Helloworld这个页面的路径

通过helloworld.wxss中进行小程序的样式调整
在wxss对这个view标签进行样式定义
view{
	width:
	height:40rpx--->指的是我们的一个响应式的一个屏幕像素
	text-align:center

}
	