package com.orange.moduledemo

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity

import com.orange.libnative.LibNative
import com.orange.moduledemo.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    private val binding by lazy { ActivityMainBinding.inflate(layoutInflater) }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(binding.root)
        binding.textView1.text = LibNative.helloWorld()
    }
}
